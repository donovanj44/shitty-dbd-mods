// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
enum class EChainStrikeEndReason : uint8;
enum class EChainStrikeCameraViewTarget : uint8;
class ASlasherPlayer;
#ifdef THEK25_K25ChainStrikeInteraction_generated_h
#error "K25ChainStrikeInteraction.generated.h already included, missing '#pragma once' in K25ChainStrikeInteraction.h"
#endif
#define THEK25_K25ChainStrikeInteraction_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_RPC_WRAPPERS \
	virtual void Multicast_AddStateTagToPlayer_Implementation(FGameplayTag tag); \
	virtual void Multicast_RemoveStateTagFromPlayer_Implementation(FGameplayTag tag); \
	virtual void Multicast_SetFallbackEndReason_Implementation(EChainStrikeEndReason chainStrikeEndReason); \
	virtual void Server_AddStateTagToPlayer_Implementation(FGameplayTag tag); \
	virtual void Server_RemoveStateTagFromPlayer_Implementation(FGameplayTag tag); \
	virtual void Server_SetCameraViewTarget_Implementation(EChainStrikeCameraViewTarget newViewTarget); \
	virtual void Server_SetFallbackEndReason_Implementation(EChainStrikeEndReason chainStrikeEndReason); \
	virtual void Server_SetShouldIncrementChargeableComponent_Implementation(bool shouldIncrement); \
 \
	DECLARE_FUNCTION(execMulticast_AddStateTagToPlayer); \
	DECLARE_FUNCTION(execMulticast_RemoveStateTagFromPlayer); \
	DECLARE_FUNCTION(execMulticast_SetFallbackEndReason); \
	DECLARE_FUNCTION(execOnRep_ChainStrikeCameraViewTarget); \
	DECLARE_FUNCTION(execServer_AddStateTagToPlayer); \
	DECLARE_FUNCTION(execServer_RemoveStateTagFromPlayer); \
	DECLARE_FUNCTION(execServer_SetCameraViewTarget); \
	DECLARE_FUNCTION(execServer_SetFallbackEndReason); \
	DECLARE_FUNCTION(execServer_SetShouldIncrementChargeableComponent);


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddStateTagToPlayer_Implementation(FGameplayTag tag); \
	virtual void Multicast_RemoveStateTagFromPlayer_Implementation(FGameplayTag tag); \
	virtual void Multicast_SetFallbackEndReason_Implementation(EChainStrikeEndReason chainStrikeEndReason); \
	virtual void Server_AddStateTagToPlayer_Implementation(FGameplayTag tag); \
	virtual void Server_RemoveStateTagFromPlayer_Implementation(FGameplayTag tag); \
	virtual void Server_SetCameraViewTarget_Implementation(EChainStrikeCameraViewTarget newViewTarget); \
	virtual void Server_SetFallbackEndReason_Implementation(EChainStrikeEndReason chainStrikeEndReason); \
	virtual void Server_SetShouldIncrementChargeableComponent_Implementation(bool shouldIncrement); \
 \
	DECLARE_FUNCTION(execMulticast_AddStateTagToPlayer); \
	DECLARE_FUNCTION(execMulticast_RemoveStateTagFromPlayer); \
	DECLARE_FUNCTION(execMulticast_SetFallbackEndReason); \
	DECLARE_FUNCTION(execOnRep_ChainStrikeCameraViewTarget); \
	DECLARE_FUNCTION(execServer_AddStateTagToPlayer); \
	DECLARE_FUNCTION(execServer_RemoveStateTagFromPlayer); \
	DECLARE_FUNCTION(execServer_SetCameraViewTarget); \
	DECLARE_FUNCTION(execServer_SetFallbackEndReason); \
	DECLARE_FUNCTION(execServer_SetShouldIncrementChargeableComponent);


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_EVENT_PARMS \
	struct K25ChainStrikeInteraction_eventCosmetic_ResetAllVignetteValues_Parms \
	{ \
		ASlasherPlayer* killer; \
	}; \
	struct K25ChainStrikeInteraction_eventCosmetic_TriggerGatewayPossessionEffects_Parms \
	{ \
		float transitionTime; \
	}; \
	struct K25ChainStrikeInteraction_eventCosmetic_TriggerInvalidGatewayPlacementSFX_Parms \
	{ \
		ASlasherPlayer* killer; \
	}; \
	struct K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms \
	{ \
		ASlasherPlayer* killer; \
		bool hasHitSurvivor; \
		bool preventAudioTriggers; \
	}; \
	struct K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeOutEffects_Parms \
	{ \
		ASlasherPlayer* killer; \
		bool preventAudioTriggers; \
	}; \
	struct K25ChainStrikeInteraction_eventMulticast_AddStateTagToPlayer_Parms \
	{ \
		FGameplayTag tag; \
	}; \
	struct K25ChainStrikeInteraction_eventMulticast_RemoveStateTagFromPlayer_Parms \
	{ \
		FGameplayTag tag; \
	}; \
	struct K25ChainStrikeInteraction_eventMulticast_SetFallbackEndReason_Parms \
	{ \
		EChainStrikeEndReason chainStrikeEndReason; \
	}; \
	struct K25ChainStrikeInteraction_eventServer_AddStateTagToPlayer_Parms \
	{ \
		FGameplayTag tag; \
	}; \
	struct K25ChainStrikeInteraction_eventServer_RemoveStateTagFromPlayer_Parms \
	{ \
		FGameplayTag tag; \
	}; \
	struct K25ChainStrikeInteraction_eventServer_SetCameraViewTarget_Parms \
	{ \
		EChainStrikeCameraViewTarget newViewTarget; \
	}; \
	struct K25ChainStrikeInteraction_eventServer_SetFallbackEndReason_Parms \
	{ \
		EChainStrikeEndReason chainStrikeEndReason; \
	}; \
	struct K25ChainStrikeInteraction_eventServer_SetShouldIncrementChargeableComponent_Parms \
	{ \
		bool shouldIncrement; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25ChainStrikeInteraction(); \
	friend struct Z_Construct_UClass_UK25ChainStrikeInteraction_Statics; \
public: \
	DECLARE_CLASS(UK25ChainStrikeInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainStrikeInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainStrikeCameraViewTarget=NETFIELD_REP_START, \
		_hasHitSurvivor, \
		NETFIELD_REP_END=_hasHitSurvivor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUK25ChainStrikeInteraction(); \
	friend struct Z_Construct_UClass_UK25ChainStrikeInteraction_Statics; \
public: \
	DECLARE_CLASS(UK25ChainStrikeInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainStrikeInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_chainStrikeCameraViewTarget=NETFIELD_REP_START, \
		_hasHitSurvivor, \
		NETFIELD_REP_END=_hasHitSurvivor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25ChainStrikeInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25ChainStrikeInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainStrikeInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainStrikeInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainStrikeInteraction(UK25ChainStrikeInteraction&&); \
	NO_API UK25ChainStrikeInteraction(const UK25ChainStrikeInteraction&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainStrikeInteraction(UK25ChainStrikeInteraction&&); \
	NO_API UK25ChainStrikeInteraction(const UK25ChainStrikeInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainStrikeInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainStrikeInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25ChainStrikeInteraction)


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chainStrikeStateMachineclass() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _chainStrikeStateMachineclass); } \
	FORCEINLINE static uint32 __PPO___repossessFadeOutTime() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _repossessFadeOutTime); } \
	FORCEINLINE static uint32 __PPO___repossessFadeInTime() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _repossessFadeInTime); } \
	FORCEINLINE static uint32 __PPO___gatewayPossessionFovModifierCurve() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _gatewayPossessionFovModifierCurve); } \
	FORCEINLINE static uint32 __PPO___controlledProjectilePossessionFovModifierCurve() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _controlledProjectilePossessionFovModifierCurve); } \
	FORCEINLINE static uint32 __PPO___chargeTimeAfterGatewayPlacementCancelled() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _chargeTimeAfterGatewayPlacementCancelled); } \
	FORCEINLINE static uint32 __PPO___chargeTimeAfterGatewayPossessionCancelled() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _chargeTimeAfterGatewayPossessionCancelled); } \
	FORCEINLINE static uint32 __PPO___chargeTimeAfterControlledChainShot() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _chargeTimeAfterControlledChainShot); } \
	FORCEINLINE static uint32 __PPO___gatewayPossessionFovChangeDuration() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _gatewayPossessionFovChangeDuration); } \
	FORCEINLINE static uint32 __PPO___gatewayPossessionCameraPanTime() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _gatewayPossessionCameraPanTime); } \
	FORCEINLINE static uint32 __PPO___controlledProjectilePossessionCameraPanTime() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _controlledProjectilePossessionCameraPanTime); } \
	FORCEINLINE static uint32 __PPO___controlledProjectilePossessionFovTimeChangeDuration() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _controlledProjectilePossessionFovTimeChangeDuration); } \
	FORCEINLINE static uint32 __PPO___stateMachine() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _stateMachine); } \
	FORCEINLINE static uint32 __PPO___authority_shouldIncrementChargeableComponent() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _authority_shouldIncrementChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___chainStrikeCameraViewTarget() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _chainStrikeCameraViewTarget); } \
	FORCEINLINE static uint32 __PPO___hasHitSurvivor() { return STRUCT_OFFSET(UK25ChainStrikeInteraction, _hasHitSurvivor); }


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_15_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25ChainStrikeInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ChainStrikeInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
