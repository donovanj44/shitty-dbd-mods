// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ACamperPlayer;
struct FSnowmanSpawnData;
enum class ESnowmanDestructionType : uint8;
class ASlasherPlayer;
#ifdef WINTER2021_Snowman_generated_h
#error "Snowman.generated.h already included, missing '#pragma once' in Snowman.h"
#endif
#define WINTER2021_Snowman_generated_h

#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_SPARSE_DATA
#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_RPC_WRAPPERS \
	virtual void Multicast_DrawDebugCollisionCheck_Implementation(FVector boxExtent, float debugLifetime) const; \
	virtual void Multicast_OnSnowmanStartBeingControlledBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman); \
	virtual void Multicast_OnSnowmanStartBeingUsedBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman); \
	virtual void Multicast_SetSnowmanHiddenInGame_Implementation(bool isHidden); \
	virtual void Multicast_SetSnowmanMaterialVariant_Implementation(const int32 materialVariantIndex); \
	virtual void Multicast_SpawnSnowman_Implementation(FSnowmanSpawnData spawnData); \
	virtual void Multicast_StartSnowmanDestruction_Implementation(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller); \
 \
	DECLARE_FUNCTION(execMulticast_DrawDebugCollisionCheck); \
	DECLARE_FUNCTION(execMulticast_OnSnowmanStartBeingControlledBySurvivor); \
	DECLARE_FUNCTION(execMulticast_OnSnowmanStartBeingUsedBySurvivor); \
	DECLARE_FUNCTION(execMulticast_SetSnowmanHiddenInGame); \
	DECLARE_FUNCTION(execMulticast_SetSnowmanMaterialVariant); \
	DECLARE_FUNCTION(execMulticast_SpawnSnowman); \
	DECLARE_FUNCTION(execMulticast_StartSnowmanDestruction); \
	DECLARE_FUNCTION(execOnRep_IsMoving); \
	DECLARE_FUNCTION(execOnRep_SnowmanDestructionType); \
	DECLARE_FUNCTION(execOnRep_SnowmanState); \
	DECLARE_FUNCTION(execOnRep_SurvivorUsingSnowman);


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DrawDebugCollisionCheck_Implementation(FVector boxExtent, float debugLifetime) const; \
	virtual void Multicast_OnSnowmanStartBeingControlledBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman); \
	virtual void Multicast_OnSnowmanStartBeingUsedBySurvivor_Implementation(ACamperPlayer* survivorUsingSnowman); \
	virtual void Multicast_SetSnowmanHiddenInGame_Implementation(bool isHidden); \
	virtual void Multicast_SetSnowmanMaterialVariant_Implementation(const int32 materialVariantIndex); \
	virtual void Multicast_SpawnSnowman_Implementation(FSnowmanSpawnData spawnData); \
	virtual void Multicast_StartSnowmanDestruction_Implementation(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller); \
 \
	DECLARE_FUNCTION(execMulticast_DrawDebugCollisionCheck); \
	DECLARE_FUNCTION(execMulticast_OnSnowmanStartBeingControlledBySurvivor); \
	DECLARE_FUNCTION(execMulticast_OnSnowmanStartBeingUsedBySurvivor); \
	DECLARE_FUNCTION(execMulticast_SetSnowmanHiddenInGame); \
	DECLARE_FUNCTION(execMulticast_SetSnowmanMaterialVariant); \
	DECLARE_FUNCTION(execMulticast_SpawnSnowman); \
	DECLARE_FUNCTION(execMulticast_StartSnowmanDestruction); \
	DECLARE_FUNCTION(execOnRep_IsMoving); \
	DECLARE_FUNCTION(execOnRep_SnowmanDestructionType); \
	DECLARE_FUNCTION(execOnRep_SnowmanState); \
	DECLARE_FUNCTION(execOnRep_SurvivorUsingSnowman);


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_EVENT_PARMS \
	struct Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Parms \
	{ \
		ASlasherPlayer* killerAttackingSnowman; \
	}; \
	struct Snowman_eventCosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Parms \
	{ \
		ACamperPlayer* survivorUsingSnowman; \
	}; \
	struct Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileControlled_Parms \
	{ \
		ACamperPlayer* survivorUsingSnowman; \
		ASlasherPlayer* killerAttackingSnowman; \
	}; \
	struct Snowman_eventCosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Parms \
	{ \
		ASlasherPlayer* killerAttackingSnowman; \
	}; \
	struct Snowman_eventCosmetic_OnSnowmanDestroyedBySurvivorRunExit_Parms \
	{ \
		ACamperPlayer* survivorUsingSnowman; \
	}; \
	struct Snowman_eventCosmetic_OnSnowmanStartBeingControlledBySurvivor_Parms \
	{ \
		ACamperPlayer* survivorUsingSnowman; \
	}; \
	struct Snowman_eventCosmetic_OnSnowmanStartBeingUsedBySurvivor_Parms \
	{ \
		ACamperPlayer* survivorUsingSnowman; \
	}; \
	struct Snowman_eventCosmetic_SetSnowmanMaterialVariant_Parms \
	{ \
		int32 materialVariantIndex; \
	}; \
	struct Snowman_eventMulticast_DrawDebugCollisionCheck_Parms \
	{ \
		FVector boxExtent; \
		float debugLifetime; \
	}; \
	struct Snowman_eventMulticast_OnSnowmanStartBeingControlledBySurvivor_Parms \
	{ \
		ACamperPlayer* survivorUsingSnowman; \
	}; \
	struct Snowman_eventMulticast_OnSnowmanStartBeingUsedBySurvivor_Parms \
	{ \
		ACamperPlayer* survivorUsingSnowman; \
	}; \
	struct Snowman_eventMulticast_SetSnowmanHiddenInGame_Parms \
	{ \
		bool isHidden; \
	}; \
	struct Snowman_eventMulticast_SetSnowmanMaterialVariant_Parms \
	{ \
		int32 materialVariantIndex; \
	}; \
	struct Snowman_eventMulticast_SpawnSnowman_Parms \
	{ \
		FSnowmanSpawnData spawnData; \
	}; \
	struct Snowman_eventMulticast_StartSnowmanDestruction_Parms \
	{ \
		ESnowmanDestructionType snowmanDestructionType; \
		bool unlockRequirementsSatisfiedForSurvivor; \
		bool unlockRequirementsSatisfiedForKiller; \
	};


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnowman(); \
	friend struct Z_Construct_UClass_ASnowman_Statics; \
public: \
	DECLARE_CLASS(ASnowman, ARespawnableInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(ASnowman) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_snowmanState=NETFIELD_REP_START, \
		_snowmanDestructionType, \
		_survivorUsingThisSnowman, \
		_isMoving, \
		NETFIELD_REP_END=_isMoving	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_INCLASS \
private: \
	static void StaticRegisterNativesASnowman(); \
	friend struct Z_Construct_UClass_ASnowman_Statics; \
public: \
	DECLARE_CLASS(ASnowman, ARespawnableInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Winter2021"), NO_API) \
	DECLARE_SERIALIZER(ASnowman) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_snowmanState=NETFIELD_REP_START, \
		_snowmanDestructionType, \
		_survivorUsingThisSnowman, \
		_isMoving, \
		NETFIELD_REP_END=_isMoving	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnowman(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnowman) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnowman); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnowman); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnowman(ASnowman&&); \
	NO_API ASnowman(const ASnowman&); \
public:


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnowman(ASnowman&&); \
	NO_API ASnowman(const ASnowman&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnowman); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnowman); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnowman)


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___timeToRespawn() { return STRUCT_OFFSET(ASnowman, _timeToRespawn); } \
	FORCEINLINE static uint32 __PPO___timeToBeDestroyed() { return STRUCT_OFFSET(ASnowman, _timeToBeDestroyed); } \
	FORCEINLINE static uint32 __PPO___snowmanState() { return STRUCT_OFFSET(ASnowman, _snowmanState); } \
	FORCEINLINE static uint32 __PPO___snowmanDestructionType() { return STRUCT_OFFSET(ASnowman, _snowmanDestructionType); } \
	FORCEINLINE static uint32 __PPO___survivorUsingThisSnowman() { return STRUCT_OFFSET(ASnowman, _survivorUsingThisSnowman); } \
	FORCEINLINE static uint32 __PPO___snowmanSkeletalMesh() { return STRUCT_OFFSET(ASnowman, _snowmanSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO___snowmanOutlineComponent() { return STRUCT_OFFSET(ASnowman, _snowmanOutlineComponent); } \
	FORCEINLINE static uint32 __PPO___snowmanCapsule() { return STRUCT_OFFSET(ASnowman, _snowmanCapsule); } \
	FORCEINLINE static uint32 __PPO___hideInSnowmanInteraction() { return STRUCT_OFFSET(ASnowman, _hideInSnowmanInteraction); } \
	FORCEINLINE static uint32 __PPO___hideInSnowmanInteractionChargeable() { return STRUCT_OFFSET(ASnowman, _hideInSnowmanInteractionChargeable); } \
	FORCEINLINE static uint32 __PPO___snowmanInteractor() { return STRUCT_OFFSET(ASnowman, _snowmanInteractor); } \
	FORCEINLINE static uint32 __PPO___snowmanInteractionZone() { return STRUCT_OFFSET(ASnowman, _snowmanInteractionZone); } \
	FORCEINLINE static uint32 __PPO___snowmanAttackableComponent() { return STRUCT_OFFSET(ASnowman, _snowmanAttackableComponent); } \
	FORCEINLINE static uint32 __PPO___isAcquiredFromPool() { return STRUCT_OFFSET(ASnowman, _isAcquiredFromPool); } \
	FORCEINLINE static uint32 __PPO___isMoving() { return STRUCT_OFFSET(ASnowman, _isMoving); }


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_22_PROLOG \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_EVENT_PARMS


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_RPC_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_INCLASS \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_SPARSE_DATA \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Winter2021_Public_Snowman_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WINTER2021_API UClass* StaticClass<class ASnowman>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Winter2021_Public_Snowman_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
