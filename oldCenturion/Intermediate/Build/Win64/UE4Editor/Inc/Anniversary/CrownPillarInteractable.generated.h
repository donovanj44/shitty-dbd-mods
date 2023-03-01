// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef ANNIVERSARY_CrownPillarInteractable_generated_h
#error "CrownPillarInteractable.generated.h already included, missing '#pragma once' in CrownPillarInteractable.h"
#endif
#define ANNIVERSARY_CrownPillarInteractable_generated_h

#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_SPARSE_DATA
#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLocallyObservedPlayerEquippedWithAnniversaryOffering); \
	DECLARE_FUNCTION(execLocal_OnIntroCompleted);


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLocallyObservedPlayerEquippedWithAnniversaryOffering); \
	DECLARE_FUNCTION(execLocal_OnIntroCompleted);


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_EVENT_PARMS \
	struct CrownPillarInteractable_eventCosmetic_OnInteractionCompleted_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
	}; \
	struct CrownPillarInteractable_eventCosmetic_OnStartedInteracting_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
		float interactionDuration; \
	};


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACrownPillarInteractable(); \
	friend struct Z_Construct_UClass_ACrownPillarInteractable_Statics; \
public: \
	DECLARE_CLASS(ACrownPillarInteractable, ARespawnableInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anniversary"), NO_API) \
	DECLARE_SERIALIZER(ACrownPillarInteractable)


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACrownPillarInteractable(); \
	friend struct Z_Construct_UClass_ACrownPillarInteractable_Statics; \
public: \
	DECLARE_CLASS(ACrownPillarInteractable, ARespawnableInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Anniversary"), NO_API) \
	DECLARE_SERIALIZER(ACrownPillarInteractable)


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACrownPillarInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACrownPillarInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrownPillarInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrownPillarInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrownPillarInteractable(ACrownPillarInteractable&&); \
	NO_API ACrownPillarInteractable(const ACrownPillarInteractable&); \
public:


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACrownPillarInteractable(ACrownPillarInteractable&&); \
	NO_API ACrownPillarInteractable(const ACrownPillarInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrownPillarInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrownPillarInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrownPillarInteractable)


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___crownPillarInteractionSecondsToCharge() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___crownPillarInteractionSecondsToChargeKiller() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionSecondsToChargeKiller); } \
	FORCEINLINE static uint32 __PPO___offeringEnabledAuraVisibilityDistance() { return STRUCT_OFFSET(ACrownPillarInteractable, _offeringEnabledAuraVisibilityDistance); } \
	FORCEINLINE static uint32 __PPO___crownPillarInteraction() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteraction); } \
	FORCEINLINE static uint32 __PPO___crownPillarInteractionKiller() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionKiller); } \
	FORCEINLINE static uint32 __PPO___crownPillarInteractionChargeable() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionChargeable); } \
	FORCEINLINE static uint32 __PPO___crownPillarInteractionChargeableKiller() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionChargeableKiller); } \
	FORCEINLINE static uint32 __PPO___crownPillarInteractor() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractor); } \
	FORCEINLINE static uint32 __PPO___crownPillarInteractionZone() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarInteractionZone); } \
	FORCEINLINE static uint32 __PPO___crownPillarStaticMesh() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarStaticMesh); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(ACrownPillarInteractable, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___nearTrackedActorComponent() { return STRUCT_OFFSET(ACrownPillarInteractable, _nearTrackedActorComponent); } \
	FORCEINLINE static uint32 __PPO___crownPillarOutlineUpdateStrategy() { return STRUCT_OFFSET(ACrownPillarInteractable, _crownPillarOutlineUpdateStrategy); }


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_17_PROLOG \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_EVENT_PARMS


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_INCLASS \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANNIVERSARY_API UClass* StaticClass<class ACrownPillarInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Anniversary_Public_CrownPillarInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
