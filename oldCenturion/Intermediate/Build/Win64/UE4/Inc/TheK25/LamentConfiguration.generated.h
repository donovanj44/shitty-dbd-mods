// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
struct FVector;
class ACamperPlayer;
class ASlasherPlayer;
#ifdef THEK25_LamentConfiguration_generated_h
#error "LamentConfiguration.generated.h already included, missing '#pragma once' in LamentConfiguration.h"
#endif
#define THEK25_LamentConfiguration_generated_h

#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_RPC_WRAPPERS \
	virtual void Multicast_CorrectLamentConfigurationPosition_Implementation(FVector const& newPosition); \
	virtual void Multicast_DownedSurvivorHoldingLamentConfiguration_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_TriggerKillerPickUpSFX_Implementation(TArray<ACamperPlayer*> const& affectedSurvivors); \
	virtual void Multicast_TriggerSolvedSFX_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnEndGameOver); \
	DECLARE_FUNCTION(execAuthority_OnGameEnded); \
	DECLARE_FUNCTION(execAuthority_OnIntroCompletedOrLevelReadyToPlay); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHitByControlledProjectile); \
	DECLARE_FUNCTION(execAuthority_RespawnLamentConfiguration); \
	DECLARE_FUNCTION(execGetChainHuntProgressPercentage); \
	DECLARE_FUNCTION(execMulticast_CorrectLamentConfigurationPosition); \
	DECLARE_FUNCTION(execMulticast_DownedSurvivorHoldingLamentConfiguration); \
	DECLARE_FUNCTION(execMulticast_TriggerKillerPickUpSFX); \
	DECLARE_FUNCTION(execMulticast_TriggerSolvedSFX); \
	DECLARE_FUNCTION(execOnCamperEscaped); \
	DECLARE_FUNCTION(execOnRep_LamentConfigurationState); \
	DECLARE_FUNCTION(execOnRep_SurvivorHeldHostage);


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_CorrectLamentConfigurationPosition_Implementation(FVector const& newPosition); \
	virtual void Multicast_DownedSurvivorHoldingLamentConfiguration_Implementation(ACamperPlayer* survivor); \
	virtual void Multicast_TriggerKillerPickUpSFX_Implementation(TArray<ACamperPlayer*> const& affectedSurvivors); \
	virtual void Multicast_TriggerSolvedSFX_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnEndGameOver); \
	DECLARE_FUNCTION(execAuthority_OnGameEnded); \
	DECLARE_FUNCTION(execAuthority_OnIntroCompletedOrLevelReadyToPlay); \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHitByControlledProjectile); \
	DECLARE_FUNCTION(execAuthority_RespawnLamentConfiguration); \
	DECLARE_FUNCTION(execGetChainHuntProgressPercentage); \
	DECLARE_FUNCTION(execMulticast_CorrectLamentConfigurationPosition); \
	DECLARE_FUNCTION(execMulticast_DownedSurvivorHoldingLamentConfiguration); \
	DECLARE_FUNCTION(execMulticast_TriggerKillerPickUpSFX); \
	DECLARE_FUNCTION(execMulticast_TriggerSolvedSFX); \
	DECLARE_FUNCTION(execOnCamperEscaped); \
	DECLARE_FUNCTION(execOnRep_LamentConfigurationState); \
	DECLARE_FUNCTION(execOnRep_SurvivorHeldHostage);


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_EVENT_PARMS \
	struct LamentConfiguration_eventCosmetic_EndSolvingCubeSFX_Parms \
	{ \
		bool hasBeenSolved; \
	}; \
	struct LamentConfiguration_eventCosmetic_OnChainHuntChargeStart_Parms \
	{ \
		float chargeTime; \
	}; \
	struct LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageEnd_Parms \
	{ \
		bool hasEndedThroughKillerAttack; \
	}; \
	struct LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageStart_Parms \
	{ \
		float hostageDuration; \
	}; \
	struct LamentConfiguration_eventCosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Parms \
	{ \
		ASlasherPlayer* killer; \
		ACamperPlayer* survivorDowned; \
	}; \
	struct LamentConfiguration_eventMulticast_CorrectLamentConfigurationPosition_Parms \
	{ \
		FVector newPosition; \
	}; \
	struct LamentConfiguration_eventMulticast_DownedSurvivorHoldingLamentConfiguration_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct LamentConfiguration_eventMulticast_TriggerKillerPickUpSFX_Parms \
	{ \
		TArray<ACamperPlayer*> affectedSurvivors; \
	}; \
	struct LamentConfiguration_eventTriggerKillerPickUpSFX_Parms \
	{ \
		TArray<ACamperPlayer*> affectedSurvivors; \
	};


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALamentConfiguration(); \
	friend struct Z_Construct_UClass_ALamentConfiguration_Statics; \
public: \
	DECLARE_CLASS(ALamentConfiguration, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(ALamentConfiguration) \
	virtual UObject* _getUObject() const override { return const_cast<ALamentConfiguration*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_lamentconfigurationState=NETFIELD_REP_START, \
		_survivorHeldHostage, \
		_solved, \
		_releasedByAttack, \
		NETFIELD_REP_END=_releasedByAttack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_INCLASS \
private: \
	static void StaticRegisterNativesALamentConfiguration(); \
	friend struct Z_Construct_UClass_ALamentConfiguration_Statics; \
public: \
	DECLARE_CLASS(ALamentConfiguration, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(ALamentConfiguration) \
	virtual UObject* _getUObject() const override { return const_cast<ALamentConfiguration*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_lamentconfigurationState=NETFIELD_REP_START, \
		_survivorHeldHostage, \
		_solved, \
		_releasedByAttack, \
		NETFIELD_REP_END=_releasedByAttack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALamentConfiguration(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALamentConfiguration) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALamentConfiguration); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALamentConfiguration); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALamentConfiguration(ALamentConfiguration&&); \
	NO_API ALamentConfiguration(const ALamentConfiguration&); \
public:


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALamentConfiguration(ALamentConfiguration&&); \
	NO_API ALamentConfiguration(const ALamentConfiguration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALamentConfiguration); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALamentConfiguration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALamentConfiguration)


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactable() { return STRUCT_OFFSET(ALamentConfiguration, _interactable); } \
	FORCEINLINE static uint32 __PPO___collectableInteractor() { return STRUCT_OFFSET(ALamentConfiguration, _collectableInteractor); } \
	FORCEINLINE static uint32 __PPO___survivorCollectItemInteraction() { return STRUCT_OFFSET(ALamentConfiguration, _survivorCollectItemInteraction); } \
	FORCEINLINE static uint32 __PPO___killerCollectItemInteraction() { return STRUCT_OFFSET(ALamentConfiguration, _killerCollectItemInteraction); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(ALamentConfiguration, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___materialHelper() { return STRUCT_OFFSET(ALamentConfiguration, _materialHelper); } \
	FORCEINLINE static uint32 __PPO___outlineStrategy() { return STRUCT_OFFSET(ALamentConfiguration, _outlineStrategy); } \
	FORCEINLINE static uint32 __PPO___spawnStrategy() { return STRUCT_OFFSET(ALamentConfiguration, _spawnStrategy); } \
	FORCEINLINE static uint32 __PPO___chainHuntComponent() { return STRUCT_OFFSET(ALamentConfiguration, _chainHuntComponent); } \
	FORCEINLINE static uint32 __PPO___dotProductMinValue() { return STRUCT_OFFSET(ALamentConfiguration, _dotProductMinValue); } \
	FORCEINLINE static uint32 __PPO___survivorAttachmentSocket() { return STRUCT_OFFSET(ALamentConfiguration, _survivorAttachmentSocket); } \
	FORCEINLINE static uint32 __PPO___killerAttachmentSocket() { return STRUCT_OFFSET(ALamentConfiguration, _killerAttachmentSocket); } \
	FORCEINLINE static uint32 __PPO___montageFollower() { return STRUCT_OFFSET(ALamentConfiguration, _montageFollower); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(ALamentConfiguration, _montagePlayer); } \
	FORCEINLINE static uint32 __PPO___chainAnimationActorClass() { return STRUCT_OFFSET(ALamentConfiguration, _chainAnimationActorClass); } \
	FORCEINLINE static uint32 __PPO___lamentConfigurationTeleportIndicatorClass() { return STRUCT_OFFSET(ALamentConfiguration, _lamentConfigurationTeleportIndicatorClass); } \
	FORCEINLINE static uint32 __PPO___chainAnimationFollowerAttachmentSocketName() { return STRUCT_OFFSET(ALamentConfiguration, _chainAnimationFollowerAttachmentSocketName); } \
	FORCEINLINE static uint32 __PPO___possessionSoundLoop() { return STRUCT_OFFSET(ALamentConfiguration, _possessionSoundLoop); } \
	FORCEINLINE static uint32 __PPO___respawnTimeAfterLamentConfigurationSolved() { return STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterLamentConfigurationSolved); } \
	FORCEINLINE static uint32 __PPO___respawnTimeAfterKillerPickUp() { return STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterKillerPickUp); } \
	FORCEINLINE static uint32 __PPO___respawnTimeAfterSurvivorFreeBySelf() { return STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterSurvivorFreeBySelf); } \
	FORCEINLINE static uint32 __PPO___respawnTimeAfterSurvivorFreeByAttack() { return STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterSurvivorFreeByAttack); } \
	FORCEINLINE static uint32 __PPO___numberChainsToLaunchUponKillerPickUpLamentConfiguration() { return STRUCT_OFFSET(ALamentConfiguration, _numberChainsToLaunchUponKillerPickUpLamentConfiguration); } \
	FORCEINLINE static uint32 __PPO___hostageInteractionTime() { return STRUCT_OFFSET(ALamentConfiguration, _hostageInteractionTime); } \
	FORCEINLINE static uint32 __PPO___localLamentConfigurationState() { return STRUCT_OFFSET(ALamentConfiguration, _localLamentConfigurationState); } \
	FORCEINLINE static uint32 __PPO___lamentconfigurationState() { return STRUCT_OFFSET(ALamentConfiguration, _lamentconfigurationState); } \
	FORCEINLINE static uint32 __PPO___chainAnimationActor() { return STRUCT_OFFSET(ALamentConfiguration, _chainAnimationActor); } \
	FORCEINLINE static uint32 __PPO___survivorHeldHostage() { return STRUCT_OFFSET(ALamentConfiguration, _survivorHeldHostage); } \
	FORCEINLINE static uint32 __PPO___solvedLamentConfigurationDropDistanceToCollectorCentimeters() { return STRUCT_OFFSET(ALamentConfiguration, _solvedLamentConfigurationDropDistanceToCollectorCentimeters); } \
	FORCEINLINE static uint32 __PPO___failedLamentConfigurationSolveDropDistanceToCollectorCentimeters() { return STRUCT_OFFSET(ALamentConfiguration, _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters); } \
	FORCEINLINE static uint32 __PPO___solved() { return STRUCT_OFFSET(ALamentConfiguration, _solved); } \
	FORCEINLINE static uint32 __PPO___releasedByAttack() { return STRUCT_OFFSET(ALamentConfiguration, _releasedByAttack); } \
	FORCEINLINE static uint32 __PPO___lamentConfigurationTeleportIndicator() { return STRUCT_OFFSET(ALamentConfiguration, _lamentConfigurationTeleportIndicator); }


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_30_PROLOG \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_INCLASS \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class ALamentConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_LamentConfiguration_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
