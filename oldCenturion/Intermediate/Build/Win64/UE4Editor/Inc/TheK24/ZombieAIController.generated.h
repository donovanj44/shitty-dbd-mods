// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
class ASlasherPlayer;
#ifdef THEK24_ZombieAIController_generated_h
#error "ZombieAIController.generated.h already included, missing '#pragma once' in ZombieAIController.h"
#endif
#define THEK24_ZombieAIController_generated_h

#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnTargetPerceptionUpdated); \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieAIController(); \
	friend struct Z_Construct_UClass_AZombieAIController_Statics; \
public: \
	DECLARE_CLASS(AZombieAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AZombieAIController)


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAZombieAIController(); \
	friend struct Z_Construct_UClass_AZombieAIController_Statics; \
public: \
	DECLARE_CLASS(AZombieAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(AZombieAIController)


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieAIController(AZombieAIController&&); \
	NO_API AZombieAIController(const AZombieAIController&); \
public:


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieAIController(AZombieAIController&&); \
	NO_API AZombieAIController(const AZombieAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieAIController)


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___zombieBehaviorTree() { return STRUCT_OFFSET(AZombieAIController, _zombieBehaviorTree); } \
	FORCEINLINE static uint32 __PPO___aiPerceptionComponent() { return STRUCT_OFFSET(AZombieAIController, _aiPerceptionComponent); } \
	FORCEINLINE static uint32 __PPO___survivorInVision() { return STRUCT_OFFSET(AZombieAIController, _survivorInVision); } \
	FORCEINLINE static uint32 __PPO___chaseTargetSurvivor() { return STRUCT_OFFSET(AZombieAIController, _chaseTargetSurvivor); } \
	FORCEINLINE static uint32 __PPO___goToLocation() { return STRUCT_OFFSET(AZombieAIController, _goToLocation); } \
	FORCEINLINE static uint32 __PPO___survivorsInAttackDetector() { return STRUCT_OFFSET(AZombieAIController, _survivorsInAttackDetector); } \
	FORCEINLINE static uint32 __PPO___zombieAttackHitTime() { return STRUCT_OFFSET(AZombieAIController, _zombieAttackHitTime); } \
	FORCEINLINE static uint32 __PPO___zombieAttackOpenTime() { return STRUCT_OFFSET(AZombieAIController, _zombieAttackOpenTime); } \
	FORCEINLINE static uint32 __PPO___zombieAnimSpawnTime() { return STRUCT_OFFSET(AZombieAIController, _zombieAnimSpawnTime); } \
	FORCEINLINE static uint32 __PPO___zombieAnimDyingTime() { return STRUCT_OFFSET(AZombieAIController, _zombieAnimDyingTime); } \
	FORCEINLINE static uint32 __PPO___zombieSightRadius() { return STRUCT_OFFSET(AZombieAIController, _zombieSightRadius); } \
	FORCEINLINE static uint32 __PPO___zombieLoseSightRadius() { return STRUCT_OFFSET(AZombieAIController, _zombieLoseSightRadius); } \
	FORCEINLINE static uint32 __PPO___zombieVisionHalfAngle() { return STRUCT_OFFSET(AZombieAIController, _zombieVisionHalfAngle); } \
	FORCEINLINE static uint32 __PPO___zombieFallSmashTime() { return STRUCT_OFFSET(AZombieAIController, _zombieFallSmashTime); } \
	FORCEINLINE static uint32 __PPO___zombieAttackCooldownTime() { return STRUCT_OFFSET(AZombieAIController, _zombieAttackCooldownTime); }


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_16_PROLOG
#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_INCLASS \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_ZombieAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class AZombieAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_ZombieAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
