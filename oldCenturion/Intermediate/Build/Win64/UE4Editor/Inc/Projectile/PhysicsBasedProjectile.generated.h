// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTILE_PhysicsBasedProjectile_generated_h
#error "PhysicsBasedProjectile.generated.h already included, missing '#pragma once' in PhysicsBasedProjectile.h"
#endif
#define PROJECTILE_PhysicsBasedProjectile_generated_h

#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_SPARSE_DATA
#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsBasedProjectile(); \
	friend struct Z_Construct_UClass_APhysicsBasedProjectile_Statics; \
public: \
	DECLARE_CLASS(APhysicsBasedProjectile, ABaseProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(APhysicsBasedProjectile)


#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsBasedProjectile(); \
	friend struct Z_Construct_UClass_APhysicsBasedProjectile_Statics; \
public: \
	DECLARE_CLASS(APhysicsBasedProjectile, ABaseProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(APhysicsBasedProjectile)


#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsBasedProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsBasedProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsBasedProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsBasedProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsBasedProjectile(APhysicsBasedProjectile&&); \
	NO_API APhysicsBasedProjectile(const APhysicsBasedProjectile&); \
public:


#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsBasedProjectile(APhysicsBasedProjectile&&); \
	NO_API APhysicsBasedProjectile(const APhysicsBasedProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsBasedProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsBasedProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhysicsBasedProjectile)


#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Movement() { return STRUCT_OFFSET(APhysicsBasedProjectile, Movement); }


#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_8_PROLOG
#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_INCLASS \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTILE_API UClass* StaticClass<class APhysicsBasedProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Projectile_Public_PhysicsBasedProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
