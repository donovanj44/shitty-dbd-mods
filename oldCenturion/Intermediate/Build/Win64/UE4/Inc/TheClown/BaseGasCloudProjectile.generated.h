// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBombType : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef THECLOWN_BaseGasCloudProjectile_generated_h
#error "BaseGasCloudProjectile.generated.h already included, missing '#pragma once' in BaseGasCloudProjectile.h"
#endif
#define THECLOWN_BaseGasCloudProjectile_generated_h

#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_SPARSE_DATA
#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_RPC_WRAPPERS \
	virtual void DissipateGasCloud_Implementation(); \
	virtual void Multicast_DissipateGasCloud_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_GetCumulativeLifetime); \
	DECLARE_FUNCTION(execAuthority_SetCumulativeLifetime); \
	DECLARE_FUNCTION(execDissipateGasCloud); \
	DECLARE_FUNCTION(execGetGasType); \
	DECLARE_FUNCTION(execIsDissipating); \
	DECLARE_FUNCTION(execIsSurvivorDetectionEnabled); \
	DECLARE_FUNCTION(execMulticast_DissipateGasCloud); \
	DECLARE_FUNCTION(execOnAcquiredChanged); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execSetIgnoredActors); \
	DECLARE_FUNCTION(execSetIsDissipating);


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DissipateGasCloud_Implementation(); \
	virtual void Multicast_DissipateGasCloud_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_GetCumulativeLifetime); \
	DECLARE_FUNCTION(execAuthority_SetCumulativeLifetime); \
	DECLARE_FUNCTION(execDissipateGasCloud); \
	DECLARE_FUNCTION(execGetGasType); \
	DECLARE_FUNCTION(execIsDissipating); \
	DECLARE_FUNCTION(execIsSurvivorDetectionEnabled); \
	DECLARE_FUNCTION(execMulticast_DissipateGasCloud); \
	DECLARE_FUNCTION(execOnAcquiredChanged); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execSetIgnoredActors); \
	DECLARE_FUNCTION(execSetIsDissipating);


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_EVENT_PARMS \
	struct BaseGasCloudProjectile_eventOnDelayedActivationStart_Parms \
	{ \
		float delay; \
	}; \
	struct BaseGasCloudProjectile_eventSetGasAudioActive_Parms \
	{ \
		bool activated; \
	};


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGasCloudProjectile(); \
	friend struct Z_Construct_UClass_ABaseGasCloudProjectile_Statics; \
public: \
	DECLARE_CLASS(ABaseGasCloudProjectile, APhysicsBasedProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(ABaseGasCloudProjectile)


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABaseGasCloudProjectile(); \
	friend struct Z_Construct_UClass_ABaseGasCloudProjectile_Statics; \
public: \
	DECLARE_CLASS(ABaseGasCloudProjectile, APhysicsBasedProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheClown"), NO_API) \
	DECLARE_SERIALIZER(ABaseGasCloudProjectile)


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGasCloudProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGasCloudProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGasCloudProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGasCloudProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGasCloudProjectile(ABaseGasCloudProjectile&&); \
	NO_API ABaseGasCloudProjectile(const ABaseGasCloudProjectile&); \
public:


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGasCloudProjectile(ABaseGasCloudProjectile&&); \
	NO_API ABaseGasCloudProjectile(const ABaseGasCloudProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGasCloudProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGasCloudProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGasCloudProjectile)


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___gasType() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasType); } \
	FORCEINLINE static uint32 __PPO___poolableProjectile() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _poolableProjectile); } \
	FORCEINLINE static uint32 __PPO___gasCloudDuration() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudDuration); } \
	FORCEINLINE static uint32 __PPO___gasCloudGravityScale() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudGravityScale); } \
	FORCEINLINE static uint32 __PPO___gasCloudBounciness() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudBounciness); } \
	FORCEINLINE static uint32 __PPO___gasCloudFriction() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudFriction); } \
	FORCEINLINE static uint32 __PPO___dissipateGasCloudTime() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _dissipateGasCloudTime); } \
	FORCEINLINE static uint32 __PPO___gasCloudMinimumLifetime() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudMinimumLifetime); } \
	FORCEINLINE static uint32 __PPO___gasCloudSimpleCollisionRadius() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudSimpleCollisionRadius); } \
	FORCEINLINE static uint32 __PPO___gasCloudComplexCollisionRadius() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudComplexCollisionRadius); } \
	FORCEINLINE static uint32 __PPO___gasCloudSurvivorDetectionRadius() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudSurvivorDetectionRadius); } \
	FORCEINLINE static uint32 __PPO___gasCloudDetectionDelay() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudDetectionDelay); } \
	FORCEINLINE static uint32 __PPO___gasCloudCosmeticFadeDuration() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasCloudCosmeticFadeDuration); } \
	FORCEINLINE static uint32 __PPO___overlappingTime() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _overlappingTime); } \
	FORCEINLINE static uint32 __PPO___dissipating() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _dissipating); } \
	FORCEINLINE static uint32 __PPO___overlappingSurvivors() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _overlappingSurvivors); } \
	FORCEINLINE static uint32 __PPO___gasParticleSystem() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _gasParticleSystem); } \
	FORCEINLINE static uint32 __PPO___simpleCollider() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _simpleCollider); } \
	FORCEINLINE static uint32 __PPO___complexCollider() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _complexCollider); } \
	FORCEINLINE static uint32 __PPO___survivorDetector() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _survivorDetector); } \
	FORCEINLINE static uint32 __PPO___activeGasCloudTracker() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _activeGasCloudTracker); } \
	FORCEINLINE static uint32 __PPO___cloudSizeModifierTag() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _cloudSizeModifierTag); } \
	FORCEINLINE static uint32 __PPO___cumulativeLifetime() { return STRUCT_OFFSET(ABaseGasCloudProjectile, _cumulativeLifetime); }


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_19_PROLOG \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_EVENT_PARMS


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_INCLASS \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_SPARSE_DATA \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THECLOWN_API UClass* StaticClass<class ABaseGasCloudProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheClown_Public_BaseGasCloudProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
