// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UDBDProjectileMovementComponent;
struct FHitResult;
enum class EK25ProjectileDeactivateReason : uint8;
struct FK25ProjectileDeactivationData;
#ifdef THEK25_K25Projectile_generated_h
#error "K25Projectile.generated.h already included, missing '#pragma once' in K25Projectile.h"
#endif
#define THEK25_K25Projectile_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_RPC_WRAPPERS \
	virtual FVector GetChainAttachmentLocation_Implementation() const; \
	virtual void Server_RequestDisableProjectile_Implementation(EK25ProjectileDeactivateReason deactivateReason); \
 \
	DECLARE_FUNCTION(execGetChainAttachmentLocation); \
	DECLARE_FUNCTION(execGetMovementComponent); \
	DECLARE_FUNCTION(execOnProjectileStopped); \
	DECLARE_FUNCTION(execServer_RequestDisableProjectile);


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetChainAttachmentLocation_Implementation() const; \
	virtual void Server_RequestDisableProjectile_Implementation(EK25ProjectileDeactivateReason deactivateReason); \
 \
	DECLARE_FUNCTION(execGetChainAttachmentLocation); \
	DECLARE_FUNCTION(execGetMovementComponent); \
	DECLARE_FUNCTION(execOnProjectileStopped); \
	DECLARE_FUNCTION(execServer_RequestDisableProjectile);


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_EVENT_PARMS \
	struct K25Projectile_eventCosmetic_OnProjectileDeactivated_Parms \
	{ \
		FK25ProjectileDeactivationData deactivationData; \
	}; \
	struct K25Projectile_eventGetChainAttachmentLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		K25Projectile_eventGetChainAttachmentLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct K25Projectile_eventServer_RequestDisableProjectile_Parms \
	{ \
		EK25ProjectileDeactivateReason deactivateReason; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25Projectile(); \
	friend struct Z_Construct_UClass_AK25Projectile_Statics; \
public: \
	DECLARE_CLASS(AK25Projectile, AKillerProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Projectile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachedChain=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachedChain	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAK25Projectile(); \
	friend struct Z_Construct_UClass_AK25Projectile_Statics; \
public: \
	DECLARE_CLASS(AK25Projectile, AKillerProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Projectile) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_attachedChain=NETFIELD_REP_START, \
		NETFIELD_REP_END=_attachedChain	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Projectile(AK25Projectile&&); \
	NO_API AK25Projectile(const AK25Projectile&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Projectile(AK25Projectile&&); \
	NO_API AK25Projectile(const AK25Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25Projectile)


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___staticMesh() { return STRUCT_OFFSET(AK25Projectile, _staticMesh); } \
	FORCEINLINE static uint32 __PPO___characterCollider() { return STRUCT_OFFSET(AK25Projectile, _characterCollider); } \
	FORCEINLINE static uint32 __PPO___environmentCollider() { return STRUCT_OFFSET(AK25Projectile, _environmentCollider); } \
	FORCEINLINE static uint32 __PPO___projectileDodgeComponent() { return STRUCT_OFFSET(AK25Projectile, _projectileDodgeComponent); } \
	FORCEINLINE static uint32 __PPO___launchInfo() { return STRUCT_OFFSET(AK25Projectile, _launchInfo); } \
	FORCEINLINE static uint32 __PPO___attachedChain() { return STRUCT_OFFSET(AK25Projectile, _attachedChain); } \
	FORCEINLINE static uint32 __PPO___timeIgnoreSlasherCollision() { return STRUCT_OFFSET(AK25Projectile, _timeIgnoreSlasherCollision); } \
	FORCEINLINE static uint32 __PPO___isActive() { return STRUCT_OFFSET(AK25Projectile, _isActive); } \
	FORCEINLINE static uint32 __PPO___lastDeactivationData() { return STRUCT_OFFSET(AK25Projectile, _lastDeactivationData); }


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_17_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Projectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
