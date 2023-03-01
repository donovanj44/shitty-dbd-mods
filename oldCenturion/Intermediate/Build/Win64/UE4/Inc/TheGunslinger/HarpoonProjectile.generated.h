// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef THEGUNSLINGER_HarpoonProjectile_generated_h
#error "HarpoonProjectile.generated.h already included, missing '#pragma once' in HarpoonProjectile.h"
#endif
#define THEGUNSLINGER_HarpoonProjectile_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHarpoonStop);


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHarpoonStop);


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHarpoonProjectile(); \
	friend struct Z_Construct_UClass_AHarpoonProjectile_Statics; \
public: \
	DECLARE_CLASS(AHarpoonProjectile, AKillerProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(AHarpoonProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AHarpoonProjectile*>(this); }


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHarpoonProjectile(); \
	friend struct Z_Construct_UClass_AHarpoonProjectile_Statics; \
public: \
	DECLARE_CLASS(AHarpoonProjectile, AKillerProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(AHarpoonProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AHarpoonProjectile*>(this); }


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHarpoonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHarpoonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHarpoonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHarpoonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHarpoonProjectile(AHarpoonProjectile&&); \
	NO_API AHarpoonProjectile(const AHarpoonProjectile&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHarpoonProjectile(AHarpoonProjectile&&); \
	NO_API AHarpoonProjectile(const AHarpoonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHarpoonProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHarpoonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHarpoonProjectile)


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___launchDistanceFromCamera() { return STRUCT_OFFSET(AHarpoonProjectile, _launchDistanceFromCamera); } \
	FORCEINLINE static uint32 __PPO___movement() { return STRUCT_OFFSET(AHarpoonProjectile, _movement); } \
	FORCEINLINE static uint32 __PPO___environmentCollider() { return STRUCT_OFFSET(AHarpoonProjectile, _environmentCollider); } \
	FORCEINLINE static uint32 __PPO___targetCollider() { return STRUCT_OFFSET(AHarpoonProjectile, _targetCollider); } \
	FORCEINLINE static uint32 __PPO___skeletalMesh() { return STRUCT_OFFSET(AHarpoonProjectile, _skeletalMesh); } \
	FORCEINLINE static uint32 __PPO___poolableActorComponent() { return STRUCT_OFFSET(AHarpoonProjectile, _poolableActorComponent); }


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_14_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class AHarpoonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_HarpoonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
