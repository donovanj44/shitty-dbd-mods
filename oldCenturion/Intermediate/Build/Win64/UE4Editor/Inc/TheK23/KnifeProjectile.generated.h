// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FLaunchInfo;
#ifdef THEK23_KnifeProjectile_generated_h
#error "KnifeProjectile.generated.h already included, missing '#pragma once' in KnifeProjectile.h"
#endif
#define THEK23_KnifeProjectile_generated_h

#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAddonExplosionRadius); \
	DECLARE_FUNCTION(execKnifeCanPierceCampers); \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnWorldColliderHit); \
	DECLARE_FUNCTION(execSetKnifeAcquired); \
	DECLARE_FUNCTION(execShouldPlayRicochetSound); \
	DECLARE_FUNCTION(execWasLaunchedDuringSuperMode);


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAddonExplosionRadius); \
	DECLARE_FUNCTION(execKnifeCanPierceCampers); \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnWorldColliderHit); \
	DECLARE_FUNCTION(execSetKnifeAcquired); \
	DECLARE_FUNCTION(execShouldPlayRicochetSound); \
	DECLARE_FUNCTION(execWasLaunchedDuringSuperMode);


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_EVENT_PARMS \
	struct KnifeProjectile_eventBP_CosmeticOnAddonExplosion_Parms \
	{ \
		FVector location; \
		FVector normal; \
	}; \
	struct KnifeProjectile_eventBP_OnLaunchCosmetic_Parms \
	{ \
		FLaunchInfo launchInfo; \
		bool hasImpactOnLaunch; \
	}; \
	struct KnifeProjectile_eventBP_SetKnifeActive_Parms \
	{ \
		bool active; \
	};


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKnifeProjectile(); \
	friend struct Z_Construct_UClass_AKnifeProjectile_Statics; \
public: \
	DECLARE_CLASS(AKnifeProjectile, AKillerProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(AKnifeProjectile)


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAKnifeProjectile(); \
	friend struct Z_Construct_UClass_AKnifeProjectile_Statics; \
public: \
	DECLARE_CLASS(AKnifeProjectile, AKillerProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(AKnifeProjectile)


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKnifeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKnifeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnifeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnifeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKnifeProjectile(AKnifeProjectile&&); \
	NO_API AKnifeProjectile(const AKnifeProjectile&); \
public:


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKnifeProjectile(AKnifeProjectile&&); \
	NO_API AKnifeProjectile(const AKnifeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKnifeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKnifeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKnifeProjectile)


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___worldCollider() { return STRUCT_OFFSET(AKnifeProjectile, _worldCollider); } \
	FORCEINLINE static uint32 __PPO___camperDetector() { return STRUCT_OFFSET(AKnifeProjectile, _camperDetector); } \
	FORCEINLINE static uint32 __PPO___playersAffectedThisThrow() { return STRUCT_OFFSET(AKnifeProjectile, _playersAffectedThisThrow); } \
	FORCEINLINE static uint32 __PPO___poolableActorComponent() { return STRUCT_OFFSET(AKnifeProjectile, _poolableActorComponent); } \
	FORCEINLINE static uint32 __PPO___knifeMaxRange() { return STRUCT_OFFSET(AKnifeProjectile, _knifeMaxRange); } \
	FORCEINLINE static uint32 __PPO___addonExplosionRadius() { return STRUCT_OFFSET(AKnifeProjectile, _addonExplosionRadius); } \
	FORCEINLINE static uint32 __PPO___numberOfAddonBounces() { return STRUCT_OFFSET(AKnifeProjectile, _numberOfAddonBounces); }


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_15_PROLOG \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_INCLASS \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class AKnifeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_KnifeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
