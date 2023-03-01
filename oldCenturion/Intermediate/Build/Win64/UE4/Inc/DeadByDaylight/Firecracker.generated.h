// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADBDPlayer;
class UGameplayModifierContainer;
struct FGameplayTag;
class ACollectable;
#ifdef DEADBYDAYLIGHT_Firecracker_generated_h
#error "Firecracker.generated.h already included, missing '#pragma once' in Firecracker.h"
#endif
#define DEADBYDAYLIGHT_Firecracker_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_RPC_WRAPPERS \
	virtual void Multicast_InitFromSpawner_Implementation(ACollectable* spawner); \
	virtual void OnEffectsInitialized_Implementation(); \
 \
	DECLARE_FUNCTION(execGetBlindnessEffectDuration); \
	DECLARE_FUNCTION(execGetDeafnessEffectDuration); \
	DECLARE_FUNCTION(execGetEffects); \
	DECLARE_FUNCTION(execGetExploded); \
	DECLARE_FUNCTION(execGetExplosionDelay); \
	DECLARE_FUNCTION(execGetExplosionEffectDuration); \
	DECLARE_FUNCTION(execGetExplosionRange); \
	DECLARE_FUNCTION(execGetModifierValue); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execHasModifierOfType); \
	DECLARE_FUNCTION(execMulticast_InitFromSpawner); \
	DECLARE_FUNCTION(execOnEffectsInitialized); \
	DECLARE_FUNCTION(execShouldBlind); \
	DECLARE_FUNCTION(execShouldDeafen);


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_InitFromSpawner_Implementation(ACollectable* spawner); \
	virtual void OnEffectsInitialized_Implementation(); \
 \
	DECLARE_FUNCTION(execGetBlindnessEffectDuration); \
	DECLARE_FUNCTION(execGetDeafnessEffectDuration); \
	DECLARE_FUNCTION(execGetEffects); \
	DECLARE_FUNCTION(execGetExploded); \
	DECLARE_FUNCTION(execGetExplosionDelay); \
	DECLARE_FUNCTION(execGetExplosionEffectDuration); \
	DECLARE_FUNCTION(execGetExplosionRange); \
	DECLARE_FUNCTION(execGetModifierValue); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execHasModifierOfType); \
	DECLARE_FUNCTION(execMulticast_InitFromSpawner); \
	DECLARE_FUNCTION(execOnEffectsInitialized); \
	DECLARE_FUNCTION(execShouldBlind); \
	DECLARE_FUNCTION(execShouldDeafen);


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_EVENT_PARMS \
	struct Firecracker_eventMulticast_InitFromSpawner_Parms \
	{ \
		ACollectable* spawner; \
	}; \
	struct Firecracker_eventOnFuseBurnUpdate_Parms \
	{ \
		float deltaSeconds; \
		float fuseTimeLeftPercent; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirecracker(); \
	friend struct Z_Construct_UClass_AFirecracker_Statics; \
public: \
	DECLARE_CLASS(AFirecracker, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AFirecracker)


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirecracker(); \
	friend struct Z_Construct_UClass_AFirecracker_Statics; \
public: \
	DECLARE_CLASS(AFirecracker, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AFirecracker)


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirecracker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirecracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirecracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirecracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirecracker(AFirecracker&&); \
	NO_API AFirecracker(const AFirecracker&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirecracker(AFirecracker&&); \
	NO_API AFirecracker(const AFirecracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirecracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirecracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirecracker)


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___effectArea() { return STRUCT_OFFSET(AFirecracker, _effectArea); } \
	FORCEINLINE static uint32 __PPO__DebugDisplayEnabled() { return STRUCT_OFFSET(AFirecracker, DebugDisplayEnabled); } \
	FORCEINLINE static uint32 __PPO___effectModifiers() { return STRUCT_OFFSET(AFirecracker, _effectModifiers); } \
	FORCEINLINE static uint32 __PPO___playerOwner() { return STRUCT_OFFSET(AFirecracker, _playerOwner); } \
	FORCEINLINE static uint32 __PPO___exploded() { return STRUCT_OFFSET(AFirecracker, _exploded); } \
	FORCEINLINE static uint32 __PPO___actorsInRange() { return STRUCT_OFFSET(AFirecracker, _actorsInRange); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AFirecracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Firecracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
