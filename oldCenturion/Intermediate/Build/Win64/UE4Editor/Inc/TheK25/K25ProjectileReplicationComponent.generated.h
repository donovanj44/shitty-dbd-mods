// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AK25Projectile;
struct FK25ProjectileDeactivationData;
class AK25Chain;
struct FLaunchInfo;
#ifdef THEK25_K25ProjectileReplicationComponent_generated_h
#error "K25ProjectileReplicationComponent.generated.h already included, missing '#pragma once' in K25ProjectileReplicationComponent.h"
#endif
#define THEK25_K25ProjectileReplicationComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_RPC_WRAPPERS \
	virtual void Multicast_DeactivateProjectile_Implementation(AK25Projectile* projectile, FK25ProjectileDeactivationData const& deactivationData); \
	virtual void Multicast_SetAttachedChain_Implementation(AK25Projectile* projectile, AK25Chain* chainToAttach, FLaunchInfo launchInfo); \
 \
	DECLARE_FUNCTION(execMulticast_DeactivateProjectile); \
	DECLARE_FUNCTION(execMulticast_SetAttachedChain);


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DeactivateProjectile_Implementation(AK25Projectile* projectile, FK25ProjectileDeactivationData const& deactivationData); \
	virtual void Multicast_SetAttachedChain_Implementation(AK25Projectile* projectile, AK25Chain* chainToAttach, FLaunchInfo launchInfo); \
 \
	DECLARE_FUNCTION(execMulticast_DeactivateProjectile); \
	DECLARE_FUNCTION(execMulticast_SetAttachedChain);


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_EVENT_PARMS \
	struct K25ProjectileReplicationComponent_eventMulticast_DeactivateProjectile_Parms \
	{ \
		AK25Projectile* projectile; \
		FK25ProjectileDeactivationData deactivationData; \
	}; \
	struct K25ProjectileReplicationComponent_eventMulticast_SetAttachedChain_Parms \
	{ \
		AK25Projectile* projectile; \
		AK25Chain* chainToAttach; \
		FLaunchInfo launchInfo; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25ProjectileReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25ProjectileReplicationComponent, UBaseProjectileReplicationComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ProjectileReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUK25ProjectileReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25ProjectileReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25ProjectileReplicationComponent, UBaseProjectileReplicationComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ProjectileReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25ProjectileReplicationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25ProjectileReplicationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ProjectileReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ProjectileReplicationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ProjectileReplicationComponent(UK25ProjectileReplicationComponent&&); \
	NO_API UK25ProjectileReplicationComponent(const UK25ProjectileReplicationComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ProjectileReplicationComponent(UK25ProjectileReplicationComponent&&); \
	NO_API UK25ProjectileReplicationComponent(const UK25ProjectileReplicationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ProjectileReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ProjectileReplicationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25ProjectileReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_11_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25ProjectileReplicationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ProjectileReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
