// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class EFireHarpoonRifleAimingInteractionSubState : uint8;
#ifdef THEGUNSLINGER_FireHarpoonRifleInteraction_generated_h
#error "FireHarpoonRifleInteraction.generated.h already included, missing '#pragma once' in FireHarpoonRifleInteraction.h"
#endif
#define THEGUNSLINGER_FireHarpoonRifleInteraction_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_14_DELEGATE \
static inline void FFireHarpoonRifleInteractionOnHitPlayer_DelegateWrapper(const FMulticastScriptDelegate& FireHarpoonRifleInteractionOnHitPlayer) \
{ \
	FireHarpoonRifleInteractionOnHitPlayer.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_13_DELEGATE \
static inline void FFireHarpoonRifleInteractionOnFireHarpoon_DelegateWrapper(const FMulticastScriptDelegate& FireHarpoonRifleInteractionOnFireHarpoon) \
{ \
	FireHarpoonRifleInteractionOnFireHarpoon.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_RPC_WRAPPERS \
	virtual bool Server_HandleMissShotScores_Validate(TArray<ADBDPlayer*> const& ); \
	virtual void Server_HandleMissShotScores_Implementation(TArray<ADBDPlayer*> const& nearMissedPlayers); \
	virtual void Server_SetAimingSubstate_Implementation(EFireHarpoonRifleAimingInteractionSubState newState); \
 \
	DECLARE_FUNCTION(execServer_HandleMissShotScores); \
	DECLARE_FUNCTION(execServer_SetAimingSubstate);


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_HandleMissShotScores_Validate(TArray<ADBDPlayer*> const& ); \
	virtual void Server_HandleMissShotScores_Implementation(TArray<ADBDPlayer*> const& nearMissedPlayers); \
	virtual void Server_SetAimingSubstate_Implementation(EFireHarpoonRifleAimingInteractionSubState newState); \
 \
	DECLARE_FUNCTION(execServer_HandleMissShotScores); \
	DECLARE_FUNCTION(execServer_SetAimingSubstate);


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_EVENT_PARMS \
	struct FireHarpoonRifleInteraction_eventServer_HandleMissShotScores_Parms \
	{ \
		TArray<ADBDPlayer*> nearMissedPlayers; \
	}; \
	struct FireHarpoonRifleInteraction_eventServer_SetAimingSubstate_Parms \
	{ \
		EFireHarpoonRifleAimingInteractionSubState newState; \
	};


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFireHarpoonRifleInteraction(); \
	friend struct Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics; \
public: \
	DECLARE_CLASS(UFireHarpoonRifleInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UFireHarpoonRifleInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_aimingSubState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_aimingSubState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFireHarpoonRifleInteraction(); \
	friend struct Z_Construct_UClass_UFireHarpoonRifleInteraction_Statics; \
public: \
	DECLARE_CLASS(UFireHarpoonRifleInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(UFireHarpoonRifleInteraction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_aimingSubState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_aimingSubState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFireHarpoonRifleInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFireHarpoonRifleInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireHarpoonRifleInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireHarpoonRifleInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFireHarpoonRifleInteraction(UFireHarpoonRifleInteraction&&); \
	NO_API UFireHarpoonRifleInteraction(const UFireHarpoonRifleInteraction&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFireHarpoonRifleInteraction(UFireHarpoonRifleInteraction&&); \
	NO_API UFireHarpoonRifleInteraction(const UFireHarpoonRifleInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFireHarpoonRifleInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFireHarpoonRifleInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFireHarpoonRifleInteraction)


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___aimingSubState() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimingSubState); } \
	FORCEINLINE static uint32 __PPO___harpoon() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _harpoon); } \
	FORCEINLINE static uint32 __PPO___collector() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _collector); } \
	FORCEINLINE static uint32 __PPO___aimDownSightDuration() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightDuration); } \
	FORCEINLINE static uint32 __PPO___aimDownSightZoom() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightZoom); } \
	FORCEINLINE static uint32 __PPO___aimDownSightMousePitchScaleMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightMousePitchScaleMultiplier); } \
	FORCEINLINE static uint32 __PPO___aimDownSightMouseYawScaleMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightMouseYawScaleMultiplier); } \
	FORCEINLINE static uint32 __PPO___aimDownSightGamepadPitchScaleMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadPitchScaleMultiplier); } \
	FORCEINLINE static uint32 __PPO___aimDownSightGamepadYawScaleMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadYawScaleMultiplier); } \
	FORCEINLINE static uint32 __PPO___aimDownSightGamepadPitchCurve() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadPitchCurve); } \
	FORCEINLINE static uint32 __PPO___aimDownSightGamepadYawCurve() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightGamepadYawCurve); } \
	FORCEINLINE static uint32 __PPO___aimDownSightRotationScaleAdjustmentTime() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightRotationScaleAdjustmentTime); } \
	FORCEINLINE static uint32 __PPO___aimDownSightMovementSpeedMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _aimDownSightMovementSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO___fireDuration() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireDuration); } \
	FORCEINLINE static uint32 __PPO___fireRotationScaleMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireRotationScaleMultiplier); } \
	FORCEINLINE static uint32 __PPO___fireRotationScaleAdjustmentTime() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireRotationScaleAdjustmentTime); } \
	FORCEINLINE static uint32 __PPO___fireMovementSpeedMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _fireMovementSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO___longRangeShotMinDistance() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _longRangeShotMinDistance); } \
	FORCEINLINE static uint32 __PPO___successMovementSpeedMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _successMovementSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO___missMovementSpeedMultiplier() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _missMovementSpeedMultiplier); } \
	FORCEINLINE static uint32 __PPO___missShotCooldownDuration() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _missShotCooldownDuration); } \
	FORCEINLINE static uint32 __PPO___nearMissShotMaxDistance() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _nearMissShotMaxDistance); } \
	FORCEINLINE static uint32 __PPO___successShotDuration() { return STRUCT_OFFSET(UFireHarpoonRifleInteraction, _successShotDuration); }


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_16_PROLOG \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_EVENT_PARMS


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class UFireHarpoonRifleInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_FireHarpoonRifleInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
