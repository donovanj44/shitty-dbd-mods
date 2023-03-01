// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBearTrapAnimInstance;
class ADBDPlayer;
class UInteractor;
class UInteractionDefinition;
class UPrimitiveComponent;
class AActor;
class ASlasherPlayer;
struct FHitResult;
class UAnimMontage;
class UAkComponent;
#ifdef THETRAPPER_BearTrap_generated_h
#error "BearTrap.generated.h already included, missing '#pragma once' in BearTrap.h"
#endif
#define THETRAPPER_BearTrap_generated_h

#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_27_DELEGATE \
static inline void FBearTrapOnIsTrapSetChanged_DelegateWrapper(const FMulticastScriptDelegate& BearTrapOnIsTrapSetChanged) \
{ \
	BearTrapOnIsTrapSetChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_SPARSE_DATA
#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execGetTrappedPlayer); \
	DECLARE_FUNCTION(execHasTrappedPlayer); \
	DECLARE_FUNCTION(execHasTrappedPlayerSinceMoved); \
	DECLARE_FUNCTION(execInitializeMainInteractor); \
	DECLARE_FUNCTION(execInitializeTrapKillerInteraction); \
	DECLARE_FUNCTION(execInitializeTrapSurvivorInteraction); \
	DECLARE_FUNCTION(execIsTrapperOutOfSafetyZone); \
	DECLARE_FUNCTION(execOnCollectUpdateEnd); \
	DECLARE_FUNCTION(execOnCollectUpdateStart); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay_Implementation); \
	DECLARE_FUNCTION(execOnSafetyZoneEndOverlap); \
	DECLARE_FUNCTION(execOnSlasherSet); \
	DECLARE_FUNCTION(execOnTrapDetectionZoneOverlapBegin); \
	DECLARE_FUNCTION(execOnTrapDetectionZoneOverlapEnd); \
	DECLARE_FUNCTION(execOnTrappedPlayerPickedUp); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execSetTrappedPlayer); \
	DECLARE_FUNCTION(execSetTrappedPlayerSinceMoved); \
	DECLARE_FUNCTION(execTrySetTrappedPlayer);


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimInstance); \
	DECLARE_FUNCTION(execGetTrappedPlayer); \
	DECLARE_FUNCTION(execHasTrappedPlayer); \
	DECLARE_FUNCTION(execHasTrappedPlayerSinceMoved); \
	DECLARE_FUNCTION(execInitializeMainInteractor); \
	DECLARE_FUNCTION(execInitializeTrapKillerInteraction); \
	DECLARE_FUNCTION(execInitializeTrapSurvivorInteraction); \
	DECLARE_FUNCTION(execIsTrapperOutOfSafetyZone); \
	DECLARE_FUNCTION(execOnCollectUpdateEnd); \
	DECLARE_FUNCTION(execOnCollectUpdateStart); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay_Implementation); \
	DECLARE_FUNCTION(execOnSafetyZoneEndOverlap); \
	DECLARE_FUNCTION(execOnSlasherSet); \
	DECLARE_FUNCTION(execOnTrapDetectionZoneOverlapBegin); \
	DECLARE_FUNCTION(execOnTrapDetectionZoneOverlapEnd); \
	DECLARE_FUNCTION(execOnTrappedPlayerPickedUp); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execSetTrappedPlayer); \
	DECLARE_FUNCTION(execSetTrappedPlayerSinceMoved); \
	DECLARE_FUNCTION(execTrySetTrappedPlayer);


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_EVENT_PARMS \
	struct BearTrap_eventCosmetic_OnPlayerTrapped_Parms \
	{ \
		ADBDPlayer* trappedPlayer; \
	}; \
	struct BearTrap_eventGetAkAudioComponent_Parms \
	{ \
		UAkComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BearTrap_eventGetAkAudioComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABearTrap(); \
	friend struct Z_Construct_UClass_ABearTrap_Statics; \
public: \
	DECLARE_CLASS(ABearTrap, ABaseTrap, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(ABearTrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_selfUntrapAttemptsRemaining=NETFIELD_REP_START, \
		NETFIELD_REP_END=_selfUntrapAttemptsRemaining	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_INCLASS \
private: \
	static void StaticRegisterNativesABearTrap(); \
	friend struct Z_Construct_UClass_ABearTrap_Statics; \
public: \
	DECLARE_CLASS(ABearTrap, ABaseTrap, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(ABearTrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_selfUntrapAttemptsRemaining=NETFIELD_REP_START, \
		NETFIELD_REP_END=_selfUntrapAttemptsRemaining	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABearTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABearTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABearTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABearTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABearTrap(ABearTrap&&); \
	NO_API ABearTrap(const ABearTrap&); \
public:


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABearTrap(ABearTrap&&); \
	NO_API ABearTrap(const ABearTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABearTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABearTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABearTrap)


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactionVolume() { return STRUCT_OFFSET(ABearTrap, _interactionVolume); } \
	FORCEINLINE static uint32 __PPO___trapPlayerDetectionZone() { return STRUCT_OFFSET(ABearTrap, _trapPlayerDetectionZone); } \
	FORCEINLINE static uint32 __PPO___killerSafetyZoneComponent() { return STRUCT_OFFSET(ABearTrap, _killerSafetyZoneComponent); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(ABearTrap, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___outlineUpdateStrategy() { return STRUCT_OFFSET(ABearTrap, _outlineUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___mapActorComponent() { return STRUCT_OFFSET(ABearTrap, _mapActorComponent); } \
	FORCEINLINE static uint32 __PPO___mapActorCollision() { return STRUCT_OFFSET(ABearTrap, _mapActorCollision); } \
	FORCEINLINE static uint32 __PPO___trapBlocker() { return STRUCT_OFFSET(ABearTrap, _trapBlocker); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(ABearTrap, _montagePlayer); } \
	FORCEINLINE static uint32 __PPO___onIsTrapSetChanged() { return STRUCT_OFFSET(ABearTrap, _onIsTrapSetChanged); } \
	FORCEINLINE static uint32 __PPO___ownerPlayer() { return STRUCT_OFFSET(ABearTrap, _ownerPlayer); } \
	FORCEINLINE static uint32 __PPO___dangerNavModifierComponent() { return STRUCT_OFFSET(ABearTrap, _dangerNavModifierComponent); } \
	FORCEINLINE static uint32 __PPO___isTrapperOutOfSafetyZone() { return STRUCT_OFFSET(ABearTrap, _isTrapperOutOfSafetyZone); } \
	FORCEINLINE static uint32 __PPO___maximumAttemptsForSelfUntrap() { return STRUCT_OFFSET(ABearTrap, _maximumAttemptsForSelfUntrap); } \
	FORCEINLINE static uint32 __PPO___selfUntrapAttemptsRemaining() { return STRUCT_OFFSET(ABearTrap, _selfUntrapAttemptsRemaining); } \
	FORCEINLINE static uint32 __PPO___mainInteractor() { return STRUCT_OFFSET(ABearTrap, _mainInteractor); } \
	FORCEINLINE static uint32 __PPO___trapSurvivor() { return STRUCT_OFFSET(ABearTrap, _trapSurvivor); } \
	FORCEINLINE static uint32 __PPO___trapKiller() { return STRUCT_OFFSET(ABearTrap, _trapKiller); } \
	FORCEINLINE static uint32 __PPO___trappedPlayer() { return STRUCT_OFFSET(ABearTrap, _trappedPlayer); } \
	FORCEINLINE static uint32 __PPO___animationMontageSlave() { return STRUCT_OFFSET(ABearTrap, _animationMontageSlave); }


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_29_PROLOG \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_EVENT_PARMS


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_INCLASS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrap_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAPPER_API UClass* StaticClass<class ABearTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTrapper_Public_BearTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
