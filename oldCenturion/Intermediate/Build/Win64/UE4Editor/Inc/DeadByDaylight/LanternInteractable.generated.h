// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class ELanternState : uint8;
struct FGameplayTag;
struct FGameEventData;
#ifdef DEADBYDAYLIGHT_LanternInteractable_generated_h
#error "LanternInteractable.generated.h already included, missing '#pragma once' in LanternInteractable.h"
#endif
#define DEADBYDAYLIGHT_LanternInteractable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventLanternInteractableOnLanternCollectedByPlayerCosmetic_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FLanternInteractableOnLanternCollectedByPlayerCosmetic_DelegateWrapper(const FMulticastScriptDelegate& LanternInteractableOnLanternCollectedByPlayerCosmetic, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventLanternInteractableOnLanternCollectedByPlayerCosmetic_Parms Parms; \
	Parms.player=player; \
	LanternInteractableOnLanternCollectedByPlayerCosmetic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventLanternInteractableOnLanternStateChanged_Parms \
{ \
	ELanternState lanternState; \
	ELanternState previousLanternState; \
}; \
static inline void FLanternInteractableOnLanternStateChanged_DelegateWrapper(const FMulticastScriptDelegate& LanternInteractableOnLanternStateChanged, ELanternState lanternState, ELanternState previousLanternState) \
{ \
	_Script_DeadByDaylight_eventLanternInteractableOnLanternStateChanged_Parms Parms; \
	Parms.lanternState=lanternState; \
	Parms.previousLanternState=previousLanternState; \
	LanternInteractableOnLanternStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanBeCollected); \
	DECLARE_FUNCTION(execCanBeDestroyed); \
	DECLARE_FUNCTION(execChangeLanternState); \
	DECLARE_FUNCTION(execCollectLight); \
	DECLARE_FUNCTION(execGetLanternState); \
	DECLARE_FUNCTION(execOnBackToCollectableTimerEnd); \
	DECLARE_FUNCTION(execOnCamperLeavingHook); \
	DECLARE_FUNCTION(execOnCamperWasHooked); \
	DECLARE_FUNCTION(execOnSlasherDestroyedLantern); \
	DECLARE_FUNCTION(execSlasherDestroyLantern);


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanBeCollected); \
	DECLARE_FUNCTION(execCanBeDestroyed); \
	DECLARE_FUNCTION(execChangeLanternState); \
	DECLARE_FUNCTION(execCollectLight); \
	DECLARE_FUNCTION(execGetLanternState); \
	DECLARE_FUNCTION(execOnBackToCollectableTimerEnd); \
	DECLARE_FUNCTION(execOnCamperLeavingHook); \
	DECLARE_FUNCTION(execOnCamperWasHooked); \
	DECLARE_FUNCTION(execOnSlasherDestroyedLantern); \
	DECLARE_FUNCTION(execSlasherDestroyLantern);


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALanternInteractable(); \
	friend struct Z_Construct_UClass_ALanternInteractable_Statics; \
public: \
	DECLARE_CLASS(ALanternInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALanternInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_INCLASS \
private: \
	static void StaticRegisterNativesALanternInteractable(); \
	friend struct Z_Construct_UClass_ALanternInteractable_Statics; \
public: \
	DECLARE_CLASS(ALanternInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALanternInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALanternInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALanternInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALanternInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALanternInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALanternInteractable(ALanternInteractable&&); \
	NO_API ALanternInteractable(const ALanternInteractable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALanternInteractable(ALanternInteractable&&); \
	NO_API ALanternInteractable(const ALanternInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALanternInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALanternInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALanternInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___collectableClass() { return STRUCT_OFFSET(ALanternInteractable, _collectableClass); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_16_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ALanternInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LanternInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
