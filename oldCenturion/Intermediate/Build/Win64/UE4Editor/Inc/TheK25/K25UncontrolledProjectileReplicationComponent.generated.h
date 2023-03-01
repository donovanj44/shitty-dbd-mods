// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AK25UncontrolledProjectile;
struct FLaunchInfo;
#ifdef THEK25_K25UncontrolledProjectileReplicationComponent_generated_h
#error "K25UncontrolledProjectileReplicationComponent.generated.h already included, missing '#pragma once' in K25UncontrolledProjectileReplicationComponent.h"
#endif
#define THEK25_K25UncontrolledProjectileReplicationComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_RPC_WRAPPERS \
	virtual void Multicast_LaunchProjectile_Implementation(AK25UncontrolledProjectile* projectile, FLaunchInfo launchInfo); \
 \
	DECLARE_FUNCTION(execMulticast_LaunchProjectile);


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_LaunchProjectile_Implementation(AK25UncontrolledProjectile* projectile, FLaunchInfo launchInfo); \
 \
	DECLARE_FUNCTION(execMulticast_LaunchProjectile);


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_EVENT_PARMS \
	struct K25UncontrolledProjectileReplicationComponent_eventMulticast_LaunchProjectile_Parms \
	{ \
		AK25UncontrolledProjectile* projectile; \
		FLaunchInfo launchInfo; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25UncontrolledProjectileReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25UncontrolledProjectileReplicationComponent, UK25ProjectileReplicationComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25UncontrolledProjectileReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUK25UncontrolledProjectileReplicationComponent(); \
	friend struct Z_Construct_UClass_UK25UncontrolledProjectileReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UK25UncontrolledProjectileReplicationComponent, UK25ProjectileReplicationComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25UncontrolledProjectileReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25UncontrolledProjectileReplicationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25UncontrolledProjectileReplicationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25UncontrolledProjectileReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25UncontrolledProjectileReplicationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25UncontrolledProjectileReplicationComponent(UK25UncontrolledProjectileReplicationComponent&&); \
	NO_API UK25UncontrolledProjectileReplicationComponent(const UK25UncontrolledProjectileReplicationComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25UncontrolledProjectileReplicationComponent(UK25UncontrolledProjectileReplicationComponent&&); \
	NO_API UK25UncontrolledProjectileReplicationComponent(const UK25UncontrolledProjectileReplicationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25UncontrolledProjectileReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25UncontrolledProjectileReplicationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25UncontrolledProjectileReplicationComponent)


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_9_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25UncontrolledProjectileReplicationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25UncontrolledProjectileReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
