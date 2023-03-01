// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK23_FlurryOfKnives_generated_h
#error "FlurryOfKnives.generated.h already included, missing '#pragma once' in FlurryOfKnives.h"
#endif
#define THEK23_FlurryOfKnives_generated_h

#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_RPC_WRAPPERS \
	virtual void Multicast_StartThrowing_Implementation(); \
	virtual bool Server_DecreaseConsecutiveKnivesStacks_Validate(); \
	virtual void Server_DecreaseConsecutiveKnivesStacks_Implementation(); \
	virtual bool Server_StartThrowing_Validate(); \
	virtual void Server_StartThrowing_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_StartThrowing); \
	DECLARE_FUNCTION(execOnRep_NumOfStacksReduction); \
	DECLARE_FUNCTION(execServer_DecreaseConsecutiveKnivesStacks); \
	DECLARE_FUNCTION(execServer_StartThrowing);


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_StartThrowing_Implementation(); \
	virtual bool Server_DecreaseConsecutiveKnivesStacks_Validate(); \
	virtual void Server_DecreaseConsecutiveKnivesStacks_Implementation(); \
	virtual bool Server_StartThrowing_Validate(); \
	virtual void Server_StartThrowing_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_StartThrowing); \
	DECLARE_FUNCTION(execOnRep_NumOfStacksReduction); \
	DECLARE_FUNCTION(execServer_DecreaseConsecutiveKnivesStacks); \
	DECLARE_FUNCTION(execServer_StartThrowing);


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_EVENT_PARMS
#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlurryOfKnives(); \
	friend struct Z_Construct_UClass_UFlurryOfKnives_Statics; \
public: \
	DECLARE_CLASS(UFlurryOfKnives, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UFlurryOfKnives) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicatedNumOfStacksReduction=NETFIELD_REP_START, \
		_isSuperModeThrow, \
		_selfSlowEffect, \
		NETFIELD_REP_END=_selfSlowEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFlurryOfKnives(); \
	friend struct Z_Construct_UClass_UFlurryOfKnives_Statics; \
public: \
	DECLARE_CLASS(UFlurryOfKnives, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UFlurryOfKnives) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicatedNumOfStacksReduction=NETFIELD_REP_START, \
		_isSuperModeThrow, \
		_selfSlowEffect, \
		NETFIELD_REP_END=_selfSlowEffect	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlurryOfKnives(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlurryOfKnives) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlurryOfKnives); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlurryOfKnives); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlurryOfKnives(UFlurryOfKnives&&); \
	NO_API UFlurryOfKnives(const UFlurryOfKnives&); \
public:


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlurryOfKnives(UFlurryOfKnives&&); \
	NO_API UFlurryOfKnives(const UFlurryOfKnives&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlurryOfKnives); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlurryOfKnives); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlurryOfKnives)


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___replicatedNumOfStacksReduction() { return STRUCT_OFFSET(UFlurryOfKnives, _replicatedNumOfStacksReduction); } \
	FORCEINLINE static uint32 __PPO___isSuperModeThrow() { return STRUCT_OFFSET(UFlurryOfKnives, _isSuperModeThrow); } \
	FORCEINLINE static uint32 __PPO___selfSlowEffect() { return STRUCT_OFFSET(UFlurryOfKnives, _selfSlowEffect); } \
	FORCEINLINE static uint32 __PPO___flurryOfKnivesEnterDuration() { return STRUCT_OFFSET(UFlurryOfKnives, _flurryOfKnivesEnterDuration); } \
	FORCEINLINE static uint32 __PPO___flurryOfKnivesExitDuration() { return STRUCT_OFFSET(UFlurryOfKnives, _flurryOfKnivesExitDuration); } \
	FORCEINLINE static uint32 __PPO___chargeTime() { return STRUCT_OFFSET(UFlurryOfKnives, _chargeTime); } \
	FORCEINLINE static uint32 __PPO___baseTimeBetweenThrows() { return STRUCT_OFFSET(UFlurryOfKnives, _baseTimeBetweenThrows); } \
	FORCEINLINE static uint32 __PPO___throwRateModifierByKnivesThrown() { return STRUCT_OFFSET(UFlurryOfKnives, _throwRateModifierByKnivesThrown); } \
	FORCEINLINE static uint32 __PPO___superModeThrowRateModifier() { return STRUCT_OFFSET(UFlurryOfKnives, _superModeThrowRateModifier); } \
	FORCEINLINE static uint32 __PPO___knivesLaunchSpeed() { return STRUCT_OFFSET(UFlurryOfKnives, _knivesLaunchSpeed); } \
	FORCEINLINE static uint32 __PPO___convergencePointDistance() { return STRUCT_OFFSET(UFlurryOfKnives, _convergencePointDistance); } \
	FORCEINLINE static uint32 __PPO___coneOfFireAngleCurve() { return STRUCT_OFFSET(UFlurryOfKnives, _coneOfFireAngleCurve); } \
	FORCEINLINE static uint32 __PPO___consecutiveKnivesStacksDecayTime() { return STRUCT_OFFSET(UFlurryOfKnives, _consecutiveKnivesStacksDecayTime); } \
	FORCEINLINE static uint32 __PPO___maxConsecutiveKnivesStacks() { return STRUCT_OFFSET(UFlurryOfKnives, _maxConsecutiveKnivesStacks); } \
	FORCEINLINE static uint32 __PPO___movementSpeedByKnivesThrown() { return STRUCT_OFFSET(UFlurryOfKnives, _movementSpeedByKnivesThrown); } \
	FORCEINLINE static uint32 __PPO___superModeBaseMovementSpeed() { return STRUCT_OFFSET(UFlurryOfKnives, _superModeBaseMovementSpeed); } \
	FORCEINLINE static uint32 __PPO___baseWalkSpeed() { return STRUCT_OFFSET(UFlurryOfKnives, _baseWalkSpeed); } \
	FORCEINLINE static uint32 __PPO___recoilIntensityByKnivesThrown() { return STRUCT_OFFSET(UFlurryOfKnives, _recoilIntensityByKnivesThrown); } \
	FORCEINLINE static uint32 __PPO___recoilDuration() { return STRUCT_OFFSET(UFlurryOfKnives, _recoilDuration); } \
	FORCEINLINE static uint32 __PPO___recoilAngle() { return STRUCT_OFFSET(UFlurryOfKnives, _recoilAngle); } \
	FORCEINLINE static uint32 __PPO___maximumRecoilAngleVariation() { return STRUCT_OFFSET(UFlurryOfKnives, _maximumRecoilAngleVariation); } \
	FORCEINLINE static uint32 __PPO___rotationSpeedAdjustmentTime() { return STRUCT_OFFSET(UFlurryOfKnives, _rotationSpeedAdjustmentTime); } \
	FORCEINLINE static uint32 __PPO___aimingStanceRotationYawScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceRotationYawScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___aimingStanceRotationPitchScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceRotationPitchScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___throwingRotationYawScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _throwingRotationYawScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___throwingRotationPitchScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _throwingRotationPitchScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___aimingStanceGamepadRotationYawScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceGamepadRotationYawScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___aimingStanceGamepadRotationPitchScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _aimingStanceGamepadRotationPitchScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___throwingGamepadRotationYawScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadRotationYawScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___throwingGamepadRotationPitchScaleAdjustment() { return STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadRotationPitchScaleAdjustment); } \
	FORCEINLINE static uint32 __PPO___aimingGamepadPitchCurve() { return STRUCT_OFFSET(UFlurryOfKnives, _aimingGamepadPitchCurve); } \
	FORCEINLINE static uint32 __PPO___aimingGamepadYawCurve() { return STRUCT_OFFSET(UFlurryOfKnives, _aimingGamepadYawCurve); } \
	FORCEINLINE static uint32 __PPO___throwingGamepadPitchCurve() { return STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadPitchCurve); } \
	FORCEINLINE static uint32 __PPO___throwingGamepadYawCurve() { return STRUCT_OFFSET(UFlurryOfKnives, _throwingGamepadYawCurve); }


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_11_PROLOG \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_INCLASS \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class UFlurryOfKnives>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_FlurryOfKnives_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
