// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FImpactInfo;
class UPrimitiveComponent;
class UBaseProjectileLauncher;
struct FVector;
struct FRotator;
struct FHitResult;
class USphereComponent;
struct FLaunchInfo;
#ifdef PROJECTILE_BaseProjectile_generated_h
#error "BaseProjectile.generated.h already included, missing '#pragma once' in BaseProjectile.h"
#endif
#define PROJECTILE_BaseProjectile_generated_h

#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_SPARSE_DATA
#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_RPC_WRAPPERS \
	virtual float GetAddLauncherVeloctyFactor_Implementation() const; \
	virtual UPrimitiveComponent* GetImpactPrimitiveComponent_Implementation() const; \
	virtual bool IsValidImpactDetection_Implementation(FImpactInfo impactInfo); \
	virtual bool IsValidPlayerDetection_Implementation(FImpactInfo impactInfo); \
 \
	DECLARE_FUNCTION(execAuthority_TryDetectCollision); \
	DECLARE_FUNCTION(execGetAddLauncherVeloctyFactor); \
	DECLARE_FUNCTION(execGetImpactPrimitiveComponent); \
	DECLARE_FUNCTION(execGetLauncher); \
	DECLARE_FUNCTION(execIsOwningPawnLocallyControlled); \
	DECLARE_FUNCTION(execIsValidImpactDetection); \
	DECLARE_FUNCTION(execIsValidPlayerDetection); \
	DECLARE_FUNCTION(execLocal_OnPlayerDetected); \
	DECLARE_FUNCTION(execLocal_SweepImpactCollision); \
	DECLARE_FUNCTION(execLocal_TryDetectCollision); \
	DECLARE_FUNCTION(execSphereTraceSingle);


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetAddLauncherVeloctyFactor_Implementation() const; \
	virtual UPrimitiveComponent* GetImpactPrimitiveComponent_Implementation() const; \
	virtual bool IsValidImpactDetection_Implementation(FImpactInfo impactInfo); \
	virtual bool IsValidPlayerDetection_Implementation(FImpactInfo impactInfo); \
 \
	DECLARE_FUNCTION(execAuthority_TryDetectCollision); \
	DECLARE_FUNCTION(execGetAddLauncherVeloctyFactor); \
	DECLARE_FUNCTION(execGetImpactPrimitiveComponent); \
	DECLARE_FUNCTION(execGetLauncher); \
	DECLARE_FUNCTION(execIsOwningPawnLocallyControlled); \
	DECLARE_FUNCTION(execIsValidImpactDetection); \
	DECLARE_FUNCTION(execIsValidPlayerDetection); \
	DECLARE_FUNCTION(execLocal_OnPlayerDetected); \
	DECLARE_FUNCTION(execLocal_SweepImpactCollision); \
	DECLARE_FUNCTION(execLocal_TryDetectCollision); \
	DECLARE_FUNCTION(execSphereTraceSingle);


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_EVENT_PARMS \
	struct BaseProjectile_eventGetAddLauncherVeloctyFactor_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectile_eventGetAddLauncherVeloctyFactor_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct BaseProjectile_eventGetImpactPrimitiveComponent_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectile_eventGetImpactPrimitiveComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct BaseProjectile_eventIsValidImpactDetection_Parms \
	{ \
		FImpactInfo impactInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectile_eventIsValidImpactDetection_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct BaseProjectile_eventIsValidPlayerDetection_Parms \
	{ \
		FImpactInfo impactInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectile_eventIsValidPlayerDetection_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct BaseProjectile_eventOnDetectCollision_Parms \
	{ \
		FImpactInfo impactInfo; \
	}; \
	struct BaseProjectile_eventOnDetectPlayer_Parms \
	{ \
		FImpactInfo impactInfo; \
	}; \
	struct BaseProjectile_eventOnLaunch_Parms \
	{ \
		FLaunchInfo launchInfo; \
		bool hasImpactOnLaunch; \
	}; \
	struct BaseProjectile_eventOnSetActive_Parms \
	{ \
		bool active; \
	};


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseProjectile(); \
	friend struct Z_Construct_UClass_ABaseProjectile_Statics; \
public: \
	DECLARE_CLASS(ABaseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(ABaseProjectile)


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABaseProjectile(); \
	friend struct Z_Construct_UClass_ABaseProjectile_Statics; \
public: \
	DECLARE_CLASS(ABaseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(ABaseProjectile)


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseProjectile(ABaseProjectile&&); \
	NO_API ABaseProjectile(const ABaseProjectile&); \
public:


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseProjectile(ABaseProjectile&&); \
	NO_API ABaseProjectile(const ABaseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseProjectile)


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___multicastLaunch() { return STRUCT_OFFSET(ABaseProjectile, _multicastLaunch); } \
	FORCEINLINE static uint32 __PPO___allowMultipleHits() { return STRUCT_OFFSET(ABaseProjectile, _allowMultipleHits); } \
	FORCEINLINE static uint32 __PPO___semanticGameplayTags() { return STRUCT_OFFSET(ABaseProjectile, _semanticGameplayTags); } \
	FORCEINLINE static uint32 __PPO___notifyClientOfServerHitValidationResult() { return STRUCT_OFFSET(ABaseProjectile, _notifyClientOfServerHitValidationResult); } \
	FORCEINLINE static uint32 __PPO___replicationComponent() { return STRUCT_OFFSET(ABaseProjectile, _replicationComponent); }


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_17_PROLOG \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_EVENT_PARMS


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_INCLASS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTILE_API UClass* StaticClass<class ABaseProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Projectile_Public_BaseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
