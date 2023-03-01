// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
class URifleChainTensionComponent;
struct FHitResult;
class URiflePlayerLinker;
class UCurveFloat;
class USplineComponent;
class UInstancedStaticMeshComponent;
class ADBDPlayer;
#ifdef THEGUNSLINGER_RifleChain_generated_h
#error "RifleChain.generated.h already included, missing '#pragma once' in RifleChain.h"
#endif
#define THEGUNSLINGER_RifleChain_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_21_DELEGATE \
struct _Script_TheGunslinger_eventRifleChainOnIsCollidingChanged_Parms \
{ \
	bool isColliding; \
}; \
static inline void FRifleChainOnIsCollidingChanged_DelegateWrapper(const FMulticastScriptDelegate& RifleChainOnIsCollidingChanged, bool isColliding) \
{ \
	_Script_TheGunslinger_eventRifleChainOnIsCollidingChanged_Parms Parms; \
	Parms.isColliding=isColliding ? true : false; \
	RifleChainOnIsCollidingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_20_DELEGATE \
struct _Script_TheGunslinger_eventRifleChainOnProjectileSet_Parms \
{ \
	AActor* projectile; \
}; \
static inline void FRifleChainOnProjectileSet_DelegateWrapper(const FMulticastScriptDelegate& RifleChainOnProjectileSet, AActor* projectile) \
{ \
	_Script_TheGunslinger_eventRifleChainOnProjectileSet_Parms Parms; \
	Parms.projectile=projectile; \
	RifleChainOnProjectileSet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChainEnd); \
	DECLARE_FUNCTION(execGetChainStart); \
	DECLARE_FUNCTION(execGetChainTensionComponent); \
	DECLARE_FUNCTION(execGetFirstAndLastCollisionHits); \
	DECLARE_FUNCTION(execGetRiflePlayerLinker); \
	DECLARE_FUNCTION(execGetUnwindingSpeed); \
	DECLARE_FUNCTION(execIsColliding); \
	DECLARE_FUNCTION(execSpawnChainPoints); \
	DECLARE_FUNCTION(execUpdateChainMesh);


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChainEnd); \
	DECLARE_FUNCTION(execGetChainStart); \
	DECLARE_FUNCTION(execGetChainTensionComponent); \
	DECLARE_FUNCTION(execGetFirstAndLastCollisionHits); \
	DECLARE_FUNCTION(execGetRiflePlayerLinker); \
	DECLARE_FUNCTION(execGetUnwindingSpeed); \
	DECLARE_FUNCTION(execIsColliding); \
	DECLARE_FUNCTION(execSpawnChainPoints); \
	DECLARE_FUNCTION(execUpdateChainMesh);


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_EVENT_PARMS \
	struct RifleChain_eventOnAttachToPlayer_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct RifleChain_eventOnUnattachFromPlayer_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARifleChain(); \
	friend struct Z_Construct_UClass_ARifleChain_Statics; \
public: \
	DECLARE_CLASS(ARifleChain, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(ARifleChain)


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_INCLASS \
private: \
	static void StaticRegisterNativesARifleChain(); \
	friend struct Z_Construct_UClass_ARifleChain_Statics; \
public: \
	DECLARE_CLASS(ARifleChain, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(ARifleChain)


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARifleChain(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARifleChain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifleChain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifleChain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifleChain(ARifleChain&&); \
	NO_API ARifleChain(const ARifleChain&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifleChain(ARifleChain&&); \
	NO_API ARifleChain(const ARifleChain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifleChain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifleChain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARifleChain)


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chainCenterAkComponent() { return STRUCT_OFFSET(ARifleChain, _chainCenterAkComponent); } \
	FORCEINLINE static uint32 __PPO___collisionLoopStartEvent() { return STRUCT_OFFSET(ARifleChain, _collisionLoopStartEvent); } \
	FORCEINLINE static uint32 __PPO___collisionLoopEndEvent() { return STRUCT_OFFSET(ARifleChain, _collisionLoopEndEvent); } \
	FORCEINLINE static uint32 __PPO___collisionSoundLoops() { return STRUCT_OFFSET(ARifleChain, _collisionSoundLoops); } \
	FORCEINLINE static uint32 __PPO___sphereTraceRadius() { return STRUCT_OFFSET(ARifleChain, _sphereTraceRadius); } \
	FORCEINLINE static uint32 __PPO___timeBetweenTrace() { return STRUCT_OFFSET(ARifleChain, _timeBetweenTrace); } \
	FORCEINLINE static uint32 __PPO___harpoon() { return STRUCT_OFFSET(ARifleChain, _harpoon); }


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_23_PROLOG \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_EVENT_PARMS


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class ARifleChain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_RifleChain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
