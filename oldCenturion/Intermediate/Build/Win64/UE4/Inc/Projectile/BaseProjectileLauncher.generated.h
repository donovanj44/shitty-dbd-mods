// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class APawn;
class ABaseProjectile;
struct FLaunchInfo;
struct FImpactInfo;
class IProjectileProvider;
#ifdef PROJECTILE_BaseProjectileLauncher_generated_h
#error "BaseProjectileLauncher.generated.h already included, missing '#pragma once' in BaseProjectileLauncher.h"
#endif
#define PROJECTILE_BaseProjectileLauncher_generated_h

#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_SPARSE_DATA
#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_RPC_WRAPPERS \
	virtual FVector GetLaunchDirection_Implementation() const; \
	virtual FVector GetLaunchDirectionAtViewAndThrowPowerRatio_Implementation(FRotator viewRotation, float throwPowerRatio) const; \
	virtual FVector GetLaunchPosition_Implementation() const; \
	virtual float GetLaunchSpeed_Implementation() const; \
	virtual float GetLaunchSpeedAtThrowPowerRatio_Implementation(float throwPowerRatio) const; \
	virtual ABaseProjectile* GetProjectileToLaunch_Implementation() const; \
	virtual bool Server_Launch_Validate(FLaunchInfo const& , ABaseProjectile* ); \
	virtual void Server_Launch_Implementation(FLaunchInfo const& launchInfo, ABaseProjectile* projectile); \
	virtual bool Server_LaunchWithImpact_Validate(FLaunchInfo const& , FImpactInfo const& , ABaseProjectile* ); \
	virtual void Server_LaunchWithImpact_Implementation(FLaunchInfo const& launchInfo, FImpactInfo const& impactInfo, ABaseProjectile* projectile); \
 \
	DECLARE_FUNCTION(execAuthority_AddMaxAmmo); \
	DECLARE_FUNCTION(execAuthority_Launch); \
	DECLARE_FUNCTION(execAuthority_Reload); \
	DECLARE_FUNCTION(execAuthority_ReturnAmmoUnits); \
	DECLARE_FUNCTION(execAuthority_SetMaxAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execGetLaunchDirection); \
	DECLARE_FUNCTION(execGetLaunchDirectionAtViewAndThrowPowerRatio); \
	DECLARE_FUNCTION(execGetLaunchPosition); \
	DECLARE_FUNCTION(execGetLaunchSpeed); \
	DECLARE_FUNCTION(execGetLaunchSpeedAtThrowPowerRatio); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetProjectileToLaunch); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execHasProjectile); \
	DECLARE_FUNCTION(execIsAmmoFull); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execLocal_Launch); \
	DECLARE_FUNCTION(execOnRep_Ammo); \
	DECLARE_FUNCTION(execOnRep_MaxAmmo); \
	DECLARE_FUNCTION(execServer_Launch); \
	DECLARE_FUNCTION(execServer_LaunchWithImpact); \
	DECLARE_FUNCTION(execSetProjectileProvider);


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetLaunchDirection_Implementation() const; \
	virtual FVector GetLaunchDirectionAtViewAndThrowPowerRatio_Implementation(FRotator viewRotation, float throwPowerRatio) const; \
	virtual FVector GetLaunchPosition_Implementation() const; \
	virtual float GetLaunchSpeed_Implementation() const; \
	virtual float GetLaunchSpeedAtThrowPowerRatio_Implementation(float throwPowerRatio) const; \
	virtual ABaseProjectile* GetProjectileToLaunch_Implementation() const; \
	virtual bool Server_Launch_Validate(FLaunchInfo const& , ABaseProjectile* ); \
	virtual void Server_Launch_Implementation(FLaunchInfo const& launchInfo, ABaseProjectile* projectile); \
	virtual bool Server_LaunchWithImpact_Validate(FLaunchInfo const& , FImpactInfo const& , ABaseProjectile* ); \
	virtual void Server_LaunchWithImpact_Implementation(FLaunchInfo const& launchInfo, FImpactInfo const& impactInfo, ABaseProjectile* projectile); \
 \
	DECLARE_FUNCTION(execAuthority_AddMaxAmmo); \
	DECLARE_FUNCTION(execAuthority_Launch); \
	DECLARE_FUNCTION(execAuthority_Reload); \
	DECLARE_FUNCTION(execAuthority_ReturnAmmoUnits); \
	DECLARE_FUNCTION(execAuthority_SetMaxAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execGetLaunchDirection); \
	DECLARE_FUNCTION(execGetLaunchDirectionAtViewAndThrowPowerRatio); \
	DECLARE_FUNCTION(execGetLaunchPosition); \
	DECLARE_FUNCTION(execGetLaunchSpeed); \
	DECLARE_FUNCTION(execGetLaunchSpeedAtThrowPowerRatio); \
	DECLARE_FUNCTION(execGetOwningPawn); \
	DECLARE_FUNCTION(execGetProjectileToLaunch); \
	DECLARE_FUNCTION(execHasAuthority); \
	DECLARE_FUNCTION(execHasProjectile); \
	DECLARE_FUNCTION(execIsAmmoFull); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execLocal_Launch); \
	DECLARE_FUNCTION(execOnRep_Ammo); \
	DECLARE_FUNCTION(execOnRep_MaxAmmo); \
	DECLARE_FUNCTION(execServer_Launch); \
	DECLARE_FUNCTION(execServer_LaunchWithImpact); \
	DECLARE_FUNCTION(execSetProjectileProvider);


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_EVENT_PARMS \
	struct BaseProjectileLauncher_eventGetLaunchDirection_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectileLauncher_eventGetLaunchDirection_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct BaseProjectileLauncher_eventGetLaunchDirectionAtViewAndThrowPowerRatio_Parms \
	{ \
		FRotator viewRotation; \
		float throwPowerRatio; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectileLauncher_eventGetLaunchDirectionAtViewAndThrowPowerRatio_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct BaseProjectileLauncher_eventGetLaunchPosition_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectileLauncher_eventGetLaunchPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct BaseProjectileLauncher_eventGetLaunchSpeed_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectileLauncher_eventGetLaunchSpeed_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct BaseProjectileLauncher_eventGetLaunchSpeedAtThrowPowerRatio_Parms \
	{ \
		float throwPowerRatio; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectileLauncher_eventGetLaunchSpeedAtThrowPowerRatio_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct BaseProjectileLauncher_eventGetProjectileToLaunch_Parms \
	{ \
		ABaseProjectile* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseProjectileLauncher_eventGetProjectileToLaunch_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct BaseProjectileLauncher_eventOnLaunch_Parms \
	{ \
		FLaunchInfo launchInfo; \
		ABaseProjectile* projectile; \
	}; \
	struct BaseProjectileLauncher_eventServer_Launch_Parms \
	{ \
		FLaunchInfo launchInfo; \
		ABaseProjectile* projectile; \
	}; \
	struct BaseProjectileLauncher_eventServer_LaunchWithImpact_Parms \
	{ \
		FLaunchInfo launchInfo; \
		FImpactInfo impactInfo; \
		ABaseProjectile* projectile; \
	}; \
	struct BaseProjectileLauncher_eventSetProjectileVar_Parms \
	{ \
		FName varName; \
		float value; \
	};


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseProjectileLauncher(); \
	friend struct Z_Construct_UClass_UBaseProjectileLauncher_Statics; \
public: \
	DECLARE_CLASS(UBaseProjectileLauncher, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(UBaseProjectileLauncher) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_ammo=NETFIELD_REP_START, \
		_maxAmmo, \
		_canLaunchWhileOutOfAmmo, \
		NETFIELD_REP_END=_canLaunchWhileOutOfAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBaseProjectileLauncher(); \
	friend struct Z_Construct_UClass_UBaseProjectileLauncher_Statics; \
public: \
	DECLARE_CLASS(UBaseProjectileLauncher, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Projectile"), NO_API) \
	DECLARE_SERIALIZER(UBaseProjectileLauncher) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_ammo=NETFIELD_REP_START, \
		_maxAmmo, \
		_canLaunchWhileOutOfAmmo, \
		NETFIELD_REP_END=_canLaunchWhileOutOfAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseProjectileLauncher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseProjectileLauncher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseProjectileLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseProjectileLauncher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseProjectileLauncher(UBaseProjectileLauncher&&); \
	NO_API UBaseProjectileLauncher(const UBaseProjectileLauncher&); \
public:


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseProjectileLauncher(UBaseProjectileLauncher&&); \
	NO_API UBaseProjectileLauncher(const UBaseProjectileLauncher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseProjectileLauncher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseProjectileLauncher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseProjectileLauncher)


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___requireLaunchImpactDetection() { return STRUCT_OFFSET(UBaseProjectileLauncher, _requireLaunchImpactDetection); } \
	FORCEINLINE static uint32 __PPO___hasInfiniteAmmunition() { return STRUCT_OFFSET(UBaseProjectileLauncher, _hasInfiniteAmmunition); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(UBaseProjectileLauncher, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO___ammo() { return STRUCT_OFFSET(UBaseProjectileLauncher, _ammo); } \
	FORCEINLINE static uint32 __PPO___maxAmmo() { return STRUCT_OFFSET(UBaseProjectileLauncher, _maxAmmo); } \
	FORCEINLINE static uint32 __PPO___canLaunchWhileOutOfAmmo() { return STRUCT_OFFSET(UBaseProjectileLauncher, _canLaunchWhileOutOfAmmo); } \
	FORCEINLINE static uint32 __PPO___debugProjectile() { return STRUCT_OFFSET(UBaseProjectileLauncher, _debugProjectile); } \
	FORCEINLINE static uint32 __PPO___projectileReplicationComponent() { return STRUCT_OFFSET(UBaseProjectileLauncher, _projectileReplicationComponent); }


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_17_PROLOG \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_EVENT_PARMS


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_INCLASS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTILE_API UClass* StaticClass<class UBaseProjectileLauncher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Projectile_Public_BaseProjectileLauncher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
