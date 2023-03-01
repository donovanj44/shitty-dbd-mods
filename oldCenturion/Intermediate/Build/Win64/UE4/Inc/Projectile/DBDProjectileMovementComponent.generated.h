// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FHitResult;
struct FVector;
#ifdef PROJECTILE_DBDProjectileMovementComponent_generated_h
#error "DBDProjectileMovementComponent.generated.h already included, missing '#pragma once' in DBDProjectileMovementComponent.h"
#endif
#define PROJECTILE_DBDProjectileMovementComponent_generated_h

#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_12_DELEGATE \
struct _Script_Projectile_eventDBDProjectileMovementComponentOnComponentToSweepCollisionBP_Parms \
{ \
	UPrimitiveComponent* primitiveComponent; \
	FHitResult hitResult; \
}; \
static inline void FDBDProjectileMovementComponentOnComponentToSweepCollisionBP_DelegateWrapper(const FMulticastScriptDelegate& DBDProjectileMovementComponentOnComponentToSweepCollisionBP, UPrimitiveComponent* primitiveComponent, FHitResult const& hitResult) \
{ \
	_Script_Projectile_eventDBDProjectileMovementComponentOnComponentToSweepCollisionBP_Parms Parms; \
	Parms.primitiveComponent=primitiveComponent; \
	Parms.hitResult=hitResult; \
	DBDProjectileMovementComponentOnComponentToSweepCollisionBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddComponentToSweep); \
	DECLARE_FUNCTION(execGetPreviousLocation);


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddComponentToSweep); \
	DECLARE_FUNCTION(execGetPreviousLocation);


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UDBDProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDProjectileMovementComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(UDBDProjectileMovementComponent)


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDBDProjectileMovementComponent(); \
	friend struct Z_Construct_UClass_UDBDProjectileMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDProjectileMovementComponent, UProjectileMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(UDBDProjectileMovementComponent)


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDProjectileMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDProjectileMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDProjectileMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDProjectileMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDProjectileMovementComponent(UDBDProjectileMovementComponent&&); \
	NO_API UDBDProjectileMovementComponent(const UDBDProjectileMovementComponent&); \
public:


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDProjectileMovementComponent(UDBDProjectileMovementComponent&&); \
	NO_API UDBDProjectileMovementComponent(const UDBDProjectileMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDProjectileMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDProjectileMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDProjectileMovementComponent)


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___componentsToSweep() { return STRUCT_OFFSET(UDBDProjectileMovementComponent, _componentsToSweep); } \
	FORCEINLINE static uint32 __PPO___previousPosition() { return STRUCT_OFFSET(UDBDProjectileMovementComponent, _previousPosition); } \
	FORCEINLINE static uint32 __PPO___cachedUpdatedComponent() { return STRUCT_OFFSET(UDBDProjectileMovementComponent, _cachedUpdatedComponent); } \
	FORCEINLINE static uint32 __PPO___initialLocation() { return STRUCT_OFFSET(UDBDProjectileMovementComponent, _initialLocation); } \
	FORCEINLINE static uint32 __PPO___distanceTravelled() { return STRUCT_OFFSET(UDBDProjectileMovementComponent, _distanceTravelled); } \
	FORCEINLINE static uint32 __PPO___hasMaximumDistance() { return STRUCT_OFFSET(UDBDProjectileMovementComponent, _hasMaximumDistance); } \
	FORCEINLINE static uint32 __PPO___maximumTravelDistance() { return STRUCT_OFFSET(UDBDProjectileMovementComponent, _maximumTravelDistance); }


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_14_PROLOG
#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_INCLASS \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTILE_API UClass* StaticClass<class UDBDProjectileMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Projectile_Public_DBDProjectileMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
