// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
class ACamperPlayer;
#ifdef THEK25_K25Power_generated_h
#error "K25Power.generated.h already included, missing '#pragma once' in K25Power.h"
#endif
#define THEK25_K25Power_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnKillerAdded); \
	DECLARE_FUNCTION(execOnRep_K25ControlledProjectile); \
	DECLARE_FUNCTION(execOnRep_K25Gateway); \
	DECLARE_FUNCTION(execOnRep_LamentConfiguration); \
	DECLARE_FUNCTION(execOnSurvivorAdded);


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnKillerAdded); \
	DECLARE_FUNCTION(execOnRep_K25ControlledProjectile); \
	DECLARE_FUNCTION(execOnRep_K25Gateway); \
	DECLARE_FUNCTION(execOnRep_LamentConfiguration); \
	DECLARE_FUNCTION(execOnSurvivorAdded);


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK25Power(); \
	friend struct Z_Construct_UClass_AK25Power_Statics; \
public: \
	DECLARE_CLASS(AK25Power, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Power) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_gateway=NETFIELD_REP_START, \
		_controlledProjectileInstance, \
		_lamentConfiguration, \
		_isPowerCharged, \
		NETFIELD_REP_END=_isPowerCharged	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_INCLASS \
private: \
	static void StaticRegisterNativesAK25Power(); \
	friend struct Z_Construct_UClass_AK25Power_Statics; \
public: \
	DECLARE_CLASS(AK25Power, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(AK25Power) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_gateway=NETFIELD_REP_START, \
		_controlledProjectileInstance, \
		_lamentConfiguration, \
		_isPowerCharged, \
		NETFIELD_REP_END=_isPowerCharged	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK25Power(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK25Power) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Power); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Power); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Power(AK25Power&&); \
	NO_API AK25Power(const AK25Power&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK25Power(AK25Power&&); \
	NO_API AK25Power(const AK25Power&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK25Power); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK25Power); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK25Power)


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___k25ChainStrikeInteractionChargeableComponent() { return STRUCT_OFFSET(AK25Power, _k25ChainStrikeInteractionChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___k25TeleportChargeableComponent() { return STRUCT_OFFSET(AK25Power, _k25TeleportChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___customKillerInstinctDatas() { return STRUCT_OFFSET(AK25Power, _customKillerInstinctDatas); } \
	FORCEINLINE static uint32 __PPO___survivorStatusEffectID() { return STRUCT_OFFSET(AK25Power, _survivorStatusEffectID); } \
	FORCEINLINE static uint32 __PPO___killerStatusEffectID() { return STRUCT_OFFSET(AK25Power, _killerStatusEffectID); } \
	FORCEINLINE static uint32 __PPO___survivorChainAttachmentComponentClass() { return STRUCT_OFFSET(AK25Power, _survivorChainAttachmentComponentClass); } \
	FORCEINLINE static uint32 __PPO___survivorChainTargetterComponentClass() { return STRUCT_OFFSET(AK25Power, _survivorChainTargetterComponentClass); } \
	FORCEINLINE static uint32 __PPO___k25GatewayClass() { return STRUCT_OFFSET(AK25Power, _k25GatewayClass); } \
	FORCEINLINE static uint32 __PPO___controlledProjectileClass() { return STRUCT_OFFSET(AK25Power, _controlledProjectileClass); } \
	FORCEINLINE static uint32 __PPO___lamentConfigurationClass() { return STRUCT_OFFSET(AK25Power, _lamentConfigurationClass); } \
	FORCEINLINE static uint32 __PPO___k25HuskClass() { return STRUCT_OFFSET(AK25Power, _k25HuskClass); } \
	FORCEINLINE static uint32 __PPO___killerTeleportFinderComponentClass() { return STRUCT_OFFSET(AK25Power, _killerTeleportFinderComponentClass); } \
	FORCEINLINE static uint32 __PPO___chainAnimationActorClass() { return STRUCT_OFFSET(AK25Power, _chainAnimationActorClass); } \
	FORCEINLINE static uint32 __PPO___chainAnimationMappingsTables() { return STRUCT_OFFSET(AK25Power, _chainAnimationMappingsTables); } \
	FORCEINLINE static uint32 __PPO___pillarAnimationActorClass() { return STRUCT_OFFSET(AK25Power, _pillarAnimationActorClass); } \
	FORCEINLINE static uint32 __PPO___k25ProjectileLauncher() { return STRUCT_OFFSET(AK25Power, _k25ProjectileLauncher); } \
	FORCEINLINE static uint32 __PPO___k25ProjectilePool() { return STRUCT_OFFSET(AK25Power, _k25ProjectilePool); } \
	FORCEINLINE static uint32 __PPO___k25ChainPool() { return STRUCT_OFFSET(AK25Power, _k25ChainPool); } \
	FORCEINLINE static uint32 __PPO___k25PowerChargeComponent() { return STRUCT_OFFSET(AK25Power, _k25PowerChargeComponent); } \
	FORCEINLINE static uint32 __PPO___k25ProjectileProvider() { return STRUCT_OFFSET(AK25Power, _k25ProjectileProvider); } \
	FORCEINLINE static uint32 __PPO___k25PowerPresentationItemProgressComponent() { return STRUCT_OFFSET(AK25Power, _k25PowerPresentationItemProgressComponent); } \
	FORCEINLINE static uint32 __PPO___gateway() { return STRUCT_OFFSET(AK25Power, _gateway); } \
	FORCEINLINE static uint32 __PPO___controlledProjectileInstance() { return STRUCT_OFFSET(AK25Power, _controlledProjectileInstance); } \
	FORCEINLINE static uint32 __PPO___lamentConfiguration() { return STRUCT_OFFSET(AK25Power, _lamentConfiguration); } \
	FORCEINLINE static uint32 __PPO___k25Husk() { return STRUCT_OFFSET(AK25Power, _k25Husk); } \
	FORCEINLINE static uint32 __PPO___chainAttachmentReplicationComponent() { return STRUCT_OFFSET(AK25Power, _chainAttachmentReplicationComponent); } \
	FORCEINLINE static uint32 __PPO___isPowerCharged() { return STRUCT_OFFSET(AK25Power, _isPowerCharged); }


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_27_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25Power_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25Power_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class AK25Power>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25Power_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
