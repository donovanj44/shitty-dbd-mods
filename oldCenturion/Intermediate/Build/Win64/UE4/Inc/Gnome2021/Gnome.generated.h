// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef GNOME2021_Gnome_generated_h
#error "Gnome.generated.h already included, missing '#pragma once' in Gnome.h"
#endif
#define GNOME2021_Gnome_generated_h

#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_SPARSE_DATA
#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_RPC_WRAPPERS
#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_EVENT_PARMS \
	struct Gnome_eventCosmetic_OnInteractionCompleted_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
	}; \
	struct Gnome_eventCosmetic_OnStartedInteracting_Parms \
	{ \
		ADBDPlayer* interactingPlayer; \
		float interactionDuration; \
	};


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGnome(); \
	friend struct Z_Construct_UClass_AGnome_Statics; \
public: \
	DECLARE_CLASS(AGnome, ARespawnableInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gnome2021"), NO_API) \
	DECLARE_SERIALIZER(AGnome)


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGnome(); \
	friend struct Z_Construct_UClass_AGnome_Statics; \
public: \
	DECLARE_CLASS(AGnome, ARespawnableInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gnome2021"), NO_API) \
	DECLARE_SERIALIZER(AGnome)


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGnome(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGnome) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGnome); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGnome); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGnome(AGnome&&); \
	NO_API AGnome(const AGnome&); \
public:


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGnome(AGnome&&); \
	NO_API AGnome(const AGnome&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGnome); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGnome); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGnome)


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___gnomeInteraction() { return STRUCT_OFFSET(AGnome, _gnomeInteraction); } \
	FORCEINLINE static uint32 __PPO___gnomeInteractionKiller() { return STRUCT_OFFSET(AGnome, _gnomeInteractionKiller); } \
	FORCEINLINE static uint32 __PPO___gnomeInteractionChargeable() { return STRUCT_OFFSET(AGnome, _gnomeInteractionChargeable); } \
	FORCEINLINE static uint32 __PPO___gnomeInteractionChargeableKiller() { return STRUCT_OFFSET(AGnome, _gnomeInteractionChargeableKiller); } \
	FORCEINLINE static uint32 __PPO___gnomeInteractor() { return STRUCT_OFFSET(AGnome, _gnomeInteractor); } \
	FORCEINLINE static uint32 __PPO___gnomeInteractionZone() { return STRUCT_OFFSET(AGnome, _gnomeInteractionZone); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(AGnome, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___gnomeSkeletalMesh() { return STRUCT_OFFSET(AGnome, _gnomeSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO___gnomeInteractionSecondsToCharge() { return STRUCT_OFFSET(AGnome, _gnomeInteractionSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___gnomeInteractionSecondsToChargeKiller() { return STRUCT_OFFSET(AGnome, _gnomeInteractionSecondsToChargeKiller); } \
	FORCEINLINE static uint32 __PPO___auraColorWhileInteracting() { return STRUCT_OFFSET(AGnome, _auraColorWhileInteracting); }


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_16_PROLOG \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_EVENT_PARMS


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_SPARSE_DATA \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_INCLASS \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_SPARSE_DATA \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Gnome2021_Public_Gnome_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GNOME2021_API UClass* StaticClass<class AGnome>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Gnome2021_Public_Gnome_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
