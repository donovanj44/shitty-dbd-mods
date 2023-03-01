// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirecrackerEffectData;
class UFlashlightComponent;
enum class EZombieState : uint8;
class UAuthoritativeMovementComponent;
class UOtherCharactersVerticalCollisionsHandler;
enum class EZombieGender : uint8;
enum class EAttackType : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class ASlasherPlayer;
#ifdef THEK24_ZombieCharacter_generated_h
#error "ZombieCharacter.generated.h already included, missing '#pragma once' in ZombieCharacter.h"
#endif
#define THEK24_ZombieCharacter_generated_h

#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_RPC_WRAPPERS \
	virtual void Multicast_ZombieKilledByKillerCosmetic_Implementation(EAttackType attackType); \
 \
	DECLARE_FUNCTION(execAuthority_DeactivateZombieAndStartRespawnTimer); \
	DECLARE_FUNCTION(execAuthority_OnFirecrackerInRangeBegin); \
	DECLARE_FUNCTION(execAuthority_OnFlashlightAdded); \
	DECLARE_FUNCTION(execAuthority_OnFlashlightRemoved); \
	DECLARE_FUNCTION(execAuthority_OnZombieStateChanged); \
	DECLARE_FUNCTION(execGetAudioSwitchState); \
	DECLARE_FUNCTION(execGetAuthoritativeMovementComponent); \
	DECLARE_FUNCTION(execGetOtherCharactersVerticalCollisionsHandler); \
	DECLARE_FUNCTION(execGetZombieGender); \
	DECLARE_FUNCTION(execMulticast_ZombieKilledByKillerCosmetic); \
	DECLARE_FUNCTION(execOnBeginOverlapZombieAttackDetector); \
	DECLARE_FUNCTION(execOnEndOverlapZombieAttackDetector); \
	DECLARE_FUNCTION(execOnRep_ZombieGender); \
	DECLARE_FUNCTION(execOnRep_ZombieState); \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ZombieKilledByKillerCosmetic_Implementation(EAttackType attackType); \
 \
	DECLARE_FUNCTION(execAuthority_DeactivateZombieAndStartRespawnTimer); \
	DECLARE_FUNCTION(execAuthority_OnFirecrackerInRangeBegin); \
	DECLARE_FUNCTION(execAuthority_OnFlashlightAdded); \
	DECLARE_FUNCTION(execAuthority_OnFlashlightRemoved); \
	DECLARE_FUNCTION(execAuthority_OnZombieStateChanged); \
	DECLARE_FUNCTION(execGetAudioSwitchState); \
	DECLARE_FUNCTION(execGetAuthoritativeMovementComponent); \
	DECLARE_FUNCTION(execGetOtherCharactersVerticalCollisionsHandler); \
	DECLARE_FUNCTION(execGetZombieGender); \
	DECLARE_FUNCTION(execMulticast_ZombieKilledByKillerCosmetic); \
	DECLARE_FUNCTION(execOnBeginOverlapZombieAttackDetector); \
	DECLARE_FUNCTION(execOnEndOverlapZombieAttackDetector); \
	DECLARE_FUNCTION(execOnRep_ZombieGender); \
	DECLARE_FUNCTION(execOnRep_ZombieState); \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_EVENT_PARMS \
	struct ZombieCharacter_eventMulticast_ZombieKilledByKillerCosmetic_Parms \
	{ \
		EAttackType attackType; \
	}; \
	struct ZombieCharacter_eventOnZombieStateChanged_Cosmetic_Parms \
	{ \
		EZombieState zombieState; \
	}; \
	struct ZombieCharacter_eventSetCharacterActive_Cosmetic_Parms \
	{ \
		bool value; \
	}; \
	struct ZombieCharacter_eventZombieKilledByKiller_Cosmetic_Parms \
	{ \
		EAttackType attackType; \
	};


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieCharacter(); \
	friend struct Z_Construct_UClass_AZombieCharacter_Statics; \
public: \
	DECLARE_CLASS(AZombieCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AZombieCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AZombieCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_zombieState=NETFIELD_REP_START, \
		_zombieGender, \
		_audioSwitchState, \
		NETFIELD_REP_END=_audioSwitchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAZombieCharacter(); \
	friend struct Z_Construct_UClass_AZombieCharacter_Statics; \
public: \
	DECLARE_CLASS(AZombieCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AZombieCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AZombieCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_zombieState=NETFIELD_REP_START, \
		_zombieGender, \
		_audioSwitchState, \
		NETFIELD_REP_END=_audioSwitchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieCharacter(AZombieCharacter&&); \
	NO_API AZombieCharacter(const AZombieCharacter&); \
public:


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieCharacter(AZombieCharacter&&); \
	NO_API AZombieCharacter(const AZombieCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieCharacter)


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___zombieWalkSpeed() { return STRUCT_OFFSET(AZombieCharacter, _zombieWalkSpeed); } \
	FORCEINLINE static uint32 __PPO___poolableComponent() { return STRUCT_OFFSET(AZombieCharacter, _poolableComponent); } \
	FORCEINLINE static uint32 __PPO___zombieAttackDetector() { return STRUCT_OFFSET(AZombieCharacter, _zombieAttackDetector); } \
	FORCEINLINE static uint32 __PPO___attackDamageZone() { return STRUCT_OFFSET(AZombieCharacter, _attackDamageZone); } \
	FORCEINLINE static uint32 __PPO___zombieState() { return STRUCT_OFFSET(AZombieCharacter, _zombieState); } \
	FORCEINLINE static uint32 __PPO___zombieRespawnTimeKilledBySlasher() { return STRUCT_OFFSET(AZombieCharacter, _zombieRespawnTimeKilledBySlasher); } \
	FORCEINLINE static uint32 __PPO___zombieRespawnTimeKilledBySurvivor() { return STRUCT_OFFSET(AZombieCharacter, _zombieRespawnTimeKilledBySurvivor); } \
	FORCEINLINE static uint32 __PPO___respawnPositionBehindGate() { return STRUCT_OFFSET(AZombieCharacter, _respawnPositionBehindGate); } \
	FORCEINLINE static uint32 __PPO___zombieGender() { return STRUCT_OFFSET(AZombieCharacter, _zombieGender); } \
	FORCEINLINE static uint32 __PPO___femaleSkeletalMesh() { return STRUCT_OFFSET(AZombieCharacter, _femaleSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO___audioSwitchState() { return STRUCT_OFFSET(AZombieCharacter, _audioSwitchState); } \
	FORCEINLINE static uint32 __PPO___blindableComponent() { return STRUCT_OFFSET(AZombieCharacter, _blindableComponent); } \
	FORCEINLINE static uint32 __PPO___blindingChargeableComponent() { return STRUCT_OFFSET(AZombieCharacter, _blindingChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___firecrackerEffectHandlerComponent() { return STRUCT_OFFSET(AZombieCharacter, _firecrackerEffectHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___flashLightableComponent() { return STRUCT_OFFSET(AZombieCharacter, _flashLightableComponent); } \
	FORCEINLINE static uint32 __PPO___zombieStunBaseTime() { return STRUCT_OFFSET(AZombieCharacter, _zombieStunBaseTime); } \
	FORCEINLINE static uint32 __PPO___objectState() { return STRUCT_OFFSET(AZombieCharacter, _objectState); } \
	FORCEINLINE static uint32 __PPO___positionRecorder() { return STRUCT_OFFSET(AZombieCharacter, _positionRecorder); } \
	FORCEINLINE static uint32 __PPO___authoritativeMovementComponent() { return STRUCT_OFFSET(AZombieCharacter, _authoritativeMovementComponent); } \
	FORCEINLINE static uint32 __PPO___otherCharactersVerticalCollisionsHandler() { return STRUCT_OFFSET(AZombieCharacter, _otherCharactersVerticalCollisionsHandler); } \
	FORCEINLINE static uint32 __PPO___ignoreActors() { return STRUCT_OFFSET(AZombieCharacter, _ignoreActors); } \
	FORCEINLINE static uint32 __PPO___zombieStunnedCapsuleRadius() { return STRUCT_OFFSET(AZombieCharacter, _zombieStunnedCapsuleRadius); } \
	FORCEINLINE static uint32 __PPO___minFallHeight() { return STRUCT_OFFSET(AZombieCharacter, _minFallHeight); } \
	FORCEINLINE static uint32 __PPO___afterInAirAttackCooldown() { return STRUCT_OFFSET(AZombieCharacter, _afterInAirAttackCooldown); }


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_35_PROLOG \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_INCLASS \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class AZombieCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_ZombieCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
