// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseProjectile;
struct FImpactInfo;
struct FLaunchInfo;
struct FVector_NetQuantize100;
struct FVector_NetQuantize10;
#ifdef PROJECTILE_BaseProjectileReplicationComponent_generated_h
#error "BaseProjectileReplicationComponent.generated.h already included, missing '#pragma once' in BaseProjectileReplicationComponent.h"
#endif
#define PROJECTILE_BaseProjectileReplicationComponent_generated_h

#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_RPC_WRAPPERS \
	virtual void Client_LaunchRefusedByServer_Implementation(ABaseProjectile* projectile); \
	virtual void Client_ReceiveDetectPlayerValidation_Implementation(ABaseProjectile* projectile, bool success); \
	virtual void Multicast_DetectImpact_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo); \
	virtual void Multicast_DetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo); \
	virtual void Multicast_OnLaunch_Implementation(ABaseProjectile* projectile, FLaunchInfo launchInfo); \
	virtual void Multicast_OnLaunchWithImpact_Implementation(ABaseProjectile* projectile, FLaunchInfo launchInfo, FImpactInfo impactInfo); \
	virtual void Multicast_SendAuthorityDetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo); \
	virtual bool Server_TryDetectPlayer_Validate(ABaseProjectile* , FImpactInfo , const FVector_NetQuantize100 , const FVector_NetQuantize10 , const float ); \
	virtual void Server_TryDetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo, const FVector_NetQuantize100 projectileLocation, const FVector_NetQuantize10 projectileRotation, const float targetLocationTimestamp); \
 \
	DECLARE_FUNCTION(execClient_LaunchRefusedByServer); \
	DECLARE_FUNCTION(execClient_ReceiveDetectPlayerValidation); \
	DECLARE_FUNCTION(execMulticast_DetectImpact); \
	DECLARE_FUNCTION(execMulticast_DetectPlayer); \
	DECLARE_FUNCTION(execMulticast_OnLaunch); \
	DECLARE_FUNCTION(execMulticast_OnLaunchWithImpact); \
	DECLARE_FUNCTION(execMulticast_SendAuthorityDetectPlayer); \
	DECLARE_FUNCTION(execServer_TryDetectPlayer);


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_LaunchRefusedByServer_Implementation(ABaseProjectile* projectile); \
	virtual void Client_ReceiveDetectPlayerValidation_Implementation(ABaseProjectile* projectile, bool success); \
	virtual void Multicast_DetectImpact_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo); \
	virtual void Multicast_DetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo); \
	virtual void Multicast_OnLaunch_Implementation(ABaseProjectile* projectile, FLaunchInfo launchInfo); \
	virtual void Multicast_OnLaunchWithImpact_Implementation(ABaseProjectile* projectile, FLaunchInfo launchInfo, FImpactInfo impactInfo); \
	virtual void Multicast_SendAuthorityDetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo); \
	virtual bool Server_TryDetectPlayer_Validate(ABaseProjectile* , FImpactInfo , const FVector_NetQuantize100 , const FVector_NetQuantize10 , const float ); \
	virtual void Server_TryDetectPlayer_Implementation(ABaseProjectile* projectile, FImpactInfo impactInfo, const FVector_NetQuantize100 projectileLocation, const FVector_NetQuantize10 projectileRotation, const float targetLocationTimestamp); \
 \
	DECLARE_FUNCTION(execClient_LaunchRefusedByServer); \
	DECLARE_FUNCTION(execClient_ReceiveDetectPlayerValidation); \
	DECLARE_FUNCTION(execMulticast_DetectImpact); \
	DECLARE_FUNCTION(execMulticast_DetectPlayer); \
	DECLARE_FUNCTION(execMulticast_OnLaunch); \
	DECLARE_FUNCTION(execMulticast_OnLaunchWithImpact); \
	DECLARE_FUNCTION(execMulticast_SendAuthorityDetectPlayer); \
	DECLARE_FUNCTION(execServer_TryDetectPlayer);


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_EVENT_PARMS \
	struct BaseProjectileReplicationComponent_eventClient_LaunchRefusedByServer_Parms \
	{ \
		ABaseProjectile* projectile; \
	}; \
	struct BaseProjectileReplicationComponent_eventClient_ReceiveDetectPlayerValidation_Parms \
	{ \
		ABaseProjectile* projectile; \
		bool success; \
	}; \
	struct BaseProjectileReplicationComponent_eventMulticast_DetectImpact_Parms \
	{ \
		ABaseProjectile* projectile; \
		FImpactInfo impactInfo; \
	}; \
	struct BaseProjectileReplicationComponent_eventMulticast_DetectPlayer_Parms \
	{ \
		ABaseProjectile* projectile; \
		FImpactInfo impactInfo; \
	}; \
	struct BaseProjectileReplicationComponent_eventMulticast_OnLaunch_Parms \
	{ \
		ABaseProjectile* projectile; \
		FLaunchInfo launchInfo; \
	}; \
	struct BaseProjectileReplicationComponent_eventMulticast_OnLaunchWithImpact_Parms \
	{ \
		ABaseProjectile* projectile; \
		FLaunchInfo launchInfo; \
		FImpactInfo impactInfo; \
	}; \
	struct BaseProjectileReplicationComponent_eventMulticast_SendAuthorityDetectPlayer_Parms \
	{ \
		ABaseProjectile* projectile; \
		FImpactInfo impactInfo; \
	}; \
	struct BaseProjectileReplicationComponent_eventServer_TryDetectPlayer_Parms \
	{ \
		ABaseProjectile* projectile; \
		FImpactInfo impactInfo; \
		FVector_NetQuantize100 projectileLocation; \
		FVector_NetQuantize10 projectileRotation; \
		float targetLocationTimestamp; \
	};


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseProjectileReplicationComponent(); \
	friend struct Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseProjectileReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(UBaseProjectileReplicationComponent)


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBaseProjectileReplicationComponent(); \
	friend struct Z_Construct_UClass_UBaseProjectileReplicationComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseProjectileReplicationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(UBaseProjectileReplicationComponent)


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseProjectileReplicationComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseProjectileReplicationComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseProjectileReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseProjectileReplicationComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseProjectileReplicationComponent(UBaseProjectileReplicationComponent&&); \
	NO_API UBaseProjectileReplicationComponent(const UBaseProjectileReplicationComponent&); \
public:


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseProjectileReplicationComponent(UBaseProjectileReplicationComponent&&); \
	NO_API UBaseProjectileReplicationComponent(const UBaseProjectileReplicationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseProjectileReplicationComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseProjectileReplicationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseProjectileReplicationComponent)


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_12_PROLOG \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_EVENT_PARMS


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_INCLASS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTILE_API UClass* StaticClass<class UBaseProjectileReplicationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Projectile_Public_BaseProjectileReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
