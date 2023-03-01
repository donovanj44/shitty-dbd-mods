// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UItemAddon;
enum class EInputInteractionType : uint8;
class UInteractor;
struct FGameplayTag;
struct FVector;
struct FRotator;
class AActor;
class ACamperPlayer;
#ifdef DEADBYDAYLIGHT_Collectable_generated_h
#error "Collectable.generated.h already included, missing '#pragma once' in Collectable.h"
#endif
#define DEADBYDAYLIGHT_Collectable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_30_DELEGATE \
struct _Script_DeadByDaylight_eventCollectableCallback_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FCollectableCallback_DelegateWrapper(const FScriptDelegate& CollectableCallback, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventCollectableCallback_Parms Parms; \
	Parms.player=player; \
	CollectableCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_29_DELEGATE \
struct _Script_DeadByDaylight_eventCollectableOnCollectablePickedUpBP_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FCollectableOnCollectablePickedUpBP_DelegateWrapper(const FMulticastScriptDelegate& CollectableOnCollectablePickedUpBP, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventCollectableOnCollectablePickedUpBP_Parms Parms; \
	Parms.player=player; \
	CollectableOnCollectablePickedUpBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_RPC_WRAPPERS \
	virtual bool CanBeCollected_Implementation(const ADBDPlayer* collector) const; \
	virtual bool CanBeDropped_Implementation(const ADBDPlayer* dropper) const; \
	virtual bool CanUse_Implementation() const; \
	virtual void DebugPrintStats_Implementation(); \
	virtual int32 GetCount_Implementation() const; \
	virtual uint8 GetItemIconIndex_Implementation() const; \
	virtual float GetUsePercentLeft_Implementation() const; \
	virtual bool IsCountDisplayForced_Implementation() const; \
	virtual bool IsRechargeable_Implementation() const; \
	virtual bool Multicast_Collected_Validate(ADBDPlayer* ); \
	virtual void Multicast_Collected_Implementation(ADBDPlayer* collector); \
	virtual bool Multicast_Dropped_Validate(ADBDPlayer* , FVector const& , FRotator const& ); \
	virtual void Multicast_Dropped_Implementation(ADBDPlayer* droppedBy, FVector const& location, FRotator const& rotation); \
	virtual void Multicast_RemoveAllAddons_Implementation(); \
	virtual void Multicast_RemoveItemAddon_Implementation(UItemAddon* addon); \
	virtual bool Multicast_Use_Validate(); \
	virtual void Multicast_Use_Implementation(); \
	virtual bool Multicast_UseReleased_Validate(ADBDPlayer* ); \
	virtual void Multicast_UseReleased_Implementation(ADBDPlayer* collector); \
	virtual void OnCollected_Implementation(ADBDPlayer* collector); \
	virtual void OnDropped_Implementation(ADBDPlayer* droppingPlayer); \
	virtual void OnUse_Implementation(); \
	virtual void OnUseReleased_Implementation(ADBDPlayer* collector); \
	virtual bool Server_Discard_Validate(); \
	virtual void Server_Discard_Implementation(); \
	virtual void SetVisibilityEvent_Implementation(bool visibility); \
 \
	DECLARE_FUNCTION(execAuthority_AddItemAddon); \
	DECLARE_FUNCTION(execAuthority_Discard); \
	DECLARE_FUNCTION(execAuthority_OnConsumed); \
	DECLARE_FUNCTION(execAuthority_RemoveItemAddon); \
	DECLARE_FUNCTION(execAuthority_Use); \
	DECLARE_FUNCTION(execAuthority_UseReleased); \
	DECLARE_FUNCTION(execCallOnCollectablePickedUpBP); \
	DECLARE_FUNCTION(execCanBeCollected); \
	DECLARE_FUNCTION(execCanBeDropped); \
	DECLARE_FUNCTION(execCanUse); \
	DECLARE_FUNCTION(execDebugPrintStats); \
	DECLARE_FUNCTION(execGetCollector); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execGetDisplayedInputType); \
	DECLARE_FUNCTION(execGetIconFilePath); \
	DECLARE_FUNCTION(execGetItemAddons); \
	DECLARE_FUNCTION(execGetItemIconIndex); \
	DECLARE_FUNCTION(execGetItemInteractor); \
	DECLARE_FUNCTION(execGetModifierMax); \
	DECLARE_FUNCTION(execGetModifierSum); \
	DECLARE_FUNCTION(execGetUsePercentLeft); \
	DECLARE_FUNCTION(execHasGameplayModifierFlag); \
	DECLARE_FUNCTION(execIsBeingUsed); \
	DECLARE_FUNCTION(execIsCollected); \
	DECLARE_FUNCTION(execIsCountDisplayForced); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execIsInSearchable); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execIsOnGround); \
	DECLARE_FUNCTION(execIsPickable); \
	DECLARE_FUNCTION(execIsRechargeable); \
	DECLARE_FUNCTION(execIsStored); \
	DECLARE_FUNCTION(execLocal_Dropped_Location); \
	DECLARE_FUNCTION(execMulticast_Collected); \
	DECLARE_FUNCTION(execMulticast_Dropped); \
	DECLARE_FUNCTION(execMulticast_RemoveAllAddons); \
	DECLARE_FUNCTION(execMulticast_RemoveItemAddon); \
	DECLARE_FUNCTION(execMulticast_Use); \
	DECLARE_FUNCTION(execMulticast_UseReleased); \
	DECLARE_FUNCTION(execOnCollected); \
	DECLARE_FUNCTION(execOnCollectorEndPlay); \
	DECLARE_FUNCTION(execOnDropped); \
	DECLARE_FUNCTION(execOnFenceInitialized); \
	DECLARE_FUNCTION(execOnRep_BegunPlayFenceName); \
	DECLARE_FUNCTION(execOnRep_Collector); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnUse); \
	DECLARE_FUNCTION(execOnUseReleased); \
	DECLARE_FUNCTION(execServer_Discard); \
	DECLARE_FUNCTION(execSetCount); \
	DECLARE_FUNCTION(execSetDisplayedInputType); \
	DECLARE_FUNCTION(execSetItemInteractor); \
	DECLARE_FUNCTION(execSetVisibilityEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanBeCollected_Implementation(const ADBDPlayer* collector) const; \
	virtual bool CanBeDropped_Implementation(const ADBDPlayer* dropper) const; \
	virtual bool CanUse_Implementation() const; \
	virtual void DebugPrintStats_Implementation(); \
	virtual int32 GetCount_Implementation() const; \
	virtual uint8 GetItemIconIndex_Implementation() const; \
	virtual float GetUsePercentLeft_Implementation() const; \
	virtual bool IsCountDisplayForced_Implementation() const; \
	virtual bool IsRechargeable_Implementation() const; \
	virtual bool Multicast_Collected_Validate(ADBDPlayer* ); \
	virtual void Multicast_Collected_Implementation(ADBDPlayer* collector); \
	virtual bool Multicast_Dropped_Validate(ADBDPlayer* , FVector const& , FRotator const& ); \
	virtual void Multicast_Dropped_Implementation(ADBDPlayer* droppedBy, FVector const& location, FRotator const& rotation); \
	virtual void Multicast_RemoveAllAddons_Implementation(); \
	virtual void Multicast_RemoveItemAddon_Implementation(UItemAddon* addon); \
	virtual bool Multicast_Use_Validate(); \
	virtual void Multicast_Use_Implementation(); \
	virtual bool Multicast_UseReleased_Validate(ADBDPlayer* ); \
	virtual void Multicast_UseReleased_Implementation(ADBDPlayer* collector); \
	virtual void OnCollected_Implementation(ADBDPlayer* collector); \
	virtual void OnDropped_Implementation(ADBDPlayer* droppingPlayer); \
	virtual void OnUse_Implementation(); \
	virtual void OnUseReleased_Implementation(ADBDPlayer* collector); \
	virtual bool Server_Discard_Validate(); \
	virtual void Server_Discard_Implementation(); \
	virtual void SetVisibilityEvent_Implementation(bool visibility); \
 \
	DECLARE_FUNCTION(execAuthority_AddItemAddon); \
	DECLARE_FUNCTION(execAuthority_Discard); \
	DECLARE_FUNCTION(execAuthority_OnConsumed); \
	DECLARE_FUNCTION(execAuthority_RemoveItemAddon); \
	DECLARE_FUNCTION(execAuthority_Use); \
	DECLARE_FUNCTION(execAuthority_UseReleased); \
	DECLARE_FUNCTION(execCallOnCollectablePickedUpBP); \
	DECLARE_FUNCTION(execCanBeCollected); \
	DECLARE_FUNCTION(execCanBeDropped); \
	DECLARE_FUNCTION(execCanUse); \
	DECLARE_FUNCTION(execDebugPrintStats); \
	DECLARE_FUNCTION(execGetCollector); \
	DECLARE_FUNCTION(execGetCount); \
	DECLARE_FUNCTION(execGetDisplayedInputType); \
	DECLARE_FUNCTION(execGetIconFilePath); \
	DECLARE_FUNCTION(execGetItemAddons); \
	DECLARE_FUNCTION(execGetItemIconIndex); \
	DECLARE_FUNCTION(execGetItemInteractor); \
	DECLARE_FUNCTION(execGetModifierMax); \
	DECLARE_FUNCTION(execGetModifierSum); \
	DECLARE_FUNCTION(execGetUsePercentLeft); \
	DECLARE_FUNCTION(execHasGameplayModifierFlag); \
	DECLARE_FUNCTION(execIsBeingUsed); \
	DECLARE_FUNCTION(execIsCollected); \
	DECLARE_FUNCTION(execIsCountDisplayForced); \
	DECLARE_FUNCTION(execIsEquipped); \
	DECLARE_FUNCTION(execIsInSearchable); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execIsOnGround); \
	DECLARE_FUNCTION(execIsPickable); \
	DECLARE_FUNCTION(execIsRechargeable); \
	DECLARE_FUNCTION(execIsStored); \
	DECLARE_FUNCTION(execLocal_Dropped_Location); \
	DECLARE_FUNCTION(execMulticast_Collected); \
	DECLARE_FUNCTION(execMulticast_Dropped); \
	DECLARE_FUNCTION(execMulticast_RemoveAllAddons); \
	DECLARE_FUNCTION(execMulticast_RemoveItemAddon); \
	DECLARE_FUNCTION(execMulticast_Use); \
	DECLARE_FUNCTION(execMulticast_UseReleased); \
	DECLARE_FUNCTION(execOnCollected); \
	DECLARE_FUNCTION(execOnCollectorEndPlay); \
	DECLARE_FUNCTION(execOnDropped); \
	DECLARE_FUNCTION(execOnFenceInitialized); \
	DECLARE_FUNCTION(execOnRep_BegunPlayFenceName); \
	DECLARE_FUNCTION(execOnRep_Collector); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execOnUse); \
	DECLARE_FUNCTION(execOnUseReleased); \
	DECLARE_FUNCTION(execServer_Discard); \
	DECLARE_FUNCTION(execSetCount); \
	DECLARE_FUNCTION(execSetDisplayedInputType); \
	DECLARE_FUNCTION(execSetItemInteractor); \
	DECLARE_FUNCTION(execSetVisibilityEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_EVENT_PARMS \
	struct Collectable_eventBP_OnSurvivorAdded_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct Collectable_eventCanBeCollected_Parms \
	{ \
		const ADBDPlayer* collector; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventCanBeCollected_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Collectable_eventCanBeDropped_Parms \
	{ \
		const ADBDPlayer* dropper; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventCanBeDropped_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Collectable_eventCanUse_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventCanUse_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Collectable_eventGetCount_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventGetCount_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Collectable_eventGetItemIconIndex_Parms \
	{ \
		uint8 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventGetItemIconIndex_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Collectable_eventGetUsePercentLeft_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventGetUsePercentLeft_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Collectable_eventIsCountDisplayForced_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventIsCountDisplayForced_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Collectable_eventIsRechargeable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Collectable_eventIsRechargeable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Collectable_eventMulticast_Collected_Parms \
	{ \
		ADBDPlayer* collector; \
	}; \
	struct Collectable_eventMulticast_Dropped_Parms \
	{ \
		ADBDPlayer* droppedBy; \
		FVector location; \
		FRotator rotation; \
	}; \
	struct Collectable_eventMulticast_RemoveItemAddon_Parms \
	{ \
		UItemAddon* addon; \
	}; \
	struct Collectable_eventMulticast_UseReleased_Parms \
	{ \
		ADBDPlayer* collector; \
	}; \
	struct Collectable_eventOnAddonsAdded_Parms \
	{ \
		TArray<UItemAddon*> addons; \
	}; \
	struct Collectable_eventOnAddonsRemoved_Parms \
	{ \
		TArray<UItemAddon*> addons; \
	}; \
	struct Collectable_eventOnCollected_Parms \
	{ \
		ADBDPlayer* collector; \
	}; \
	struct Collectable_eventOnDropped_Parms \
	{ \
		ADBDPlayer* droppingPlayer; \
	}; \
	struct Collectable_eventOnPostItemAddonsCreation_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct Collectable_eventOnUseReleased_Parms \
	{ \
		ADBDPlayer* collector; \
	}; \
	struct Collectable_eventSetVisibilityEvent_Parms \
	{ \
		bool visibility; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACollectable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_collector=NETFIELD_REP_START, \
		_state, \
		_itemCount, \
		_begunPlayFenceName, \
		NETFIELD_REP_END=_begunPlayFenceName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_INCLASS \
private: \
	static void StaticRegisterNativesACollectable(); \
	friend struct Z_Construct_UClass_ACollectable_Statics; \
public: \
	DECLARE_CLASS(ACollectable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACollectable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_collector=NETFIELD_REP_START, \
		_state, \
		_itemCount, \
		_begunPlayFenceName, \
		NETFIELD_REP_END=_begunPlayFenceName	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACollectable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACollectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACollectable(ACollectable&&); \
	NO_API ACollectable(const ACollectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectable)


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BeingCollected() { return STRUCT_OFFSET(ACollectable, BeingCollected); } \
	FORCEINLINE static uint32 __PPO__BeingDropped() { return STRUCT_OFFSET(ACollectable, BeingDropped); } \
	FORCEINLINE static uint32 __PPO___beingConsumedByEntity() { return STRUCT_OFFSET(ACollectable, _beingConsumedByEntity); } \
	FORCEINLINE static uint32 __PPO___itemInteractor() { return STRUCT_OFFSET(ACollectable, _itemInteractor); } \
	FORCEINLINE static uint32 __PPO___mesh() { return STRUCT_OFFSET(ACollectable, _mesh); } \
	FORCEINLINE static uint32 __PPO___displayedInputType() { return STRUCT_OFFSET(ACollectable, _displayedInputType); } \
	FORCEINLINE static uint32 __PPO___objectState() { return STRUCT_OFFSET(ACollectable, _objectState); } \
	FORCEINLINE static uint32 __PPO___placementOrigin() { return STRUCT_OFFSET(ACollectable, _placementOrigin); } \
	FORCEINLINE static uint32 __PPO___collector() { return STRUCT_OFFSET(ACollectable, _collector); } \
	FORCEINLINE static uint32 __PPO___firstCollector() { return STRUCT_OFFSET(ACollectable, _firstCollector); } \
	FORCEINLINE static uint32 __PPO___state() { return STRUCT_OFFSET(ACollectable, _state); } \
	FORCEINLINE static uint32 __PPO___itemAddons() { return STRUCT_OFFSET(ACollectable, _itemAddons); } \
	FORCEINLINE static uint32 __PPO___itemCount() { return STRUCT_OFFSET(ACollectable, _itemCount); } \
	FORCEINLINE static uint32 __PPO___begunPlayFenceName() { return STRUCT_OFFSET(ACollectable, _begunPlayFenceName); } \
	FORCEINLINE static uint32 __PPO___attachToSocketName() { return STRUCT_OFFSET(ACollectable, _attachToSocketName); } \
	FORCEINLINE static uint32 __PPO___collectInInventoryType() { return STRUCT_OFFSET(ACollectable, _collectInInventoryType); } \
	FORCEINLINE static uint32 __PPO___stateTagForCollector() { return STRUCT_OFFSET(ACollectable, _stateTagForCollector); } \
	FORCEINLINE static uint32 __PPO___itemType() { return STRUCT_OFFSET(ACollectable, _itemType); } \
	FORCEINLINE static uint32 __PPO___discardWhenConsumed() { return STRUCT_OFFSET(ACollectable, _discardWhenConsumed); } \
	FORCEINLINE static uint32 __PPO___disableAttachmentReplication() { return STRUCT_OFFSET(ACollectable, _disableAttachmentReplication); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_32_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ACollectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Collectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
