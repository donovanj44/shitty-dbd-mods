// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEEXECUTIONER_TormentMode_generated_h
#error "TormentMode.generated.h already included, missing '#pragma once' in TormentMode.h"
#endif
#define THEEXECUTIONER_TormentMode_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_RPC_WRAPPERS \
	virtual bool Server_RequestMoreActorInAttackPool_Validate(); \
	virtual void Server_RequestMoreActorInAttackPool_Implementation(); \
 \
	DECLARE_FUNCTION(execIsInTormentMode); \
	DECLARE_FUNCTION(execOnTormentModeChargeEmpty); \
	DECLARE_FUNCTION(execServer_RequestMoreActorInAttackPool);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RequestMoreActorInAttackPool_Validate(); \
	virtual void Server_RequestMoreActorInAttackPool_Implementation(); \
 \
	DECLARE_FUNCTION(execIsInTormentMode); \
	DECLARE_FUNCTION(execOnTormentModeChargeEmpty); \
	DECLARE_FUNCTION(execServer_RequestMoreActorInAttackPool);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_EVENT_PARMS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATormentMode(); \
	friend struct Z_Construct_UClass_ATormentMode_Statics; \
public: \
	DECLARE_CLASS(ATormentMode, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentMode)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATormentMode(); \
	friend struct Z_Construct_UClass_ATormentMode_Statics; \
public: \
	DECLARE_CLASS(ATormentMode, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentMode)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATormentMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATormentMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentMode(ATormentMode&&); \
	NO_API ATormentMode(const ATormentMode&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentMode(ATormentMode&&); \
	NO_API ATormentMode(const ATormentMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATormentMode)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___activateTormentModeCharge() { return STRUCT_OFFSET(ATormentMode, _activateTormentModeCharge); } \
	FORCEINLINE static uint32 __PPO___tormentModeCharge() { return STRUCT_OFFSET(ATormentMode, _tormentModeCharge); } \
	FORCEINLINE static uint32 __PPO___tormentModeChargePresentation() { return STRUCT_OFFSET(ATormentMode, _tormentModeChargePresentation); } \
	FORCEINLINE static uint32 __PPO___powerToggleComponent() { return STRUCT_OFFSET(ATormentMode, _powerToggleComponent); } \
	FORCEINLINE static uint32 __PPO___tormentTrailSpawnerComponent() { return STRUCT_OFFSET(ATormentMode, _tormentTrailSpawnerComponent); } \
	FORCEINLINE static uint32 __PPO___tormentTrailPointCollectionComponent() { return STRUCT_OFFSET(ATormentMode, _tormentTrailPointCollectionComponent); } \
	FORCEINLINE static uint32 __PPO___restrictedTormentTrailPointCollectionComponent() { return STRUCT_OFFSET(ATormentMode, _restrictedTormentTrailPointCollectionComponent); } \
	FORCEINLINE static uint32 __PPO___tormentTrailControllerPool() { return STRUCT_OFFSET(ATormentMode, _tormentTrailControllerPool); } \
	FORCEINLINE static uint32 __PPO___tormentAttackTrailControllerPool() { return STRUCT_OFFSET(ATormentMode, _tormentAttackTrailControllerPool); } \
	FORCEINLINE static uint32 __PPO___restrictedTormentTrailControllerPool() { return STRUCT_OFFSET(ATormentMode, _restrictedTormentTrailControllerPool); } \
	FORCEINLINE static uint32 __PPO___tormentTrailPointPool() { return STRUCT_OFFSET(ATormentMode, _tormentTrailPointPool); } \
	FORCEINLINE static uint32 __PPO___restrictedTormentTrailPointPool() { return STRUCT_OFFSET(ATormentMode, _restrictedTormentTrailPointPool); } \
	FORCEINLINE static uint32 __PPO___activateTormentModeSecondsToCharge() { return STRUCT_OFFSET(ATormentMode, _activateTormentModeSecondsToCharge); } \
	FORCEINLINE static uint32 __PPO___tormentModeMaxCharge() { return STRUCT_OFFSET(ATormentMode, _tormentModeMaxCharge); } \
	FORCEINLINE static uint32 __PPO___tormentModeChargeRate() { return STRUCT_OFFSET(ATormentMode, _tormentModeChargeRate); } \
	FORCEINLINE static uint32 __PPO___tormentModeDischargeRate() { return STRUCT_OFFSET(ATormentMode, _tormentModeDischargeRate); } \
	FORCEINLINE static uint32 __PPO___tormentModePauseChargeRate() { return STRUCT_OFFSET(ATormentMode, _tormentModePauseChargeRate); } \
	FORCEINLINE static uint32 __PPO___tormentModeAttackConsumePower() { return STRUCT_OFFSET(ATormentMode, _tormentModeAttackConsumePower); } \
	FORCEINLINE static uint32 __PPO___tormentModeMinimumPercentToActivate() { return STRUCT_OFFSET(ATormentMode, _tormentModeMinimumPercentToActivate); } \
	FORCEINLINE static uint32 __PPO___tormentModeMouseYawScale() { return STRUCT_OFFSET(ATormentMode, _tormentModeMouseYawScale); } \
	FORCEINLINE static uint32 __PPO___tormentModeYawAdjustTime() { return STRUCT_OFFSET(ATormentMode, _tormentModeYawAdjustTime); } \
	FORCEINLINE static uint32 __PPO___tormentModeGamePadYawScale() { return STRUCT_OFFSET(ATormentMode, _tormentModeGamePadYawScale); } \
	FORCEINLINE static uint32 __PPO___tormentModeYawInputLimit() { return STRUCT_OFFSET(ATormentMode, _tormentModeYawInputLimit); } \
	FORCEINLINE static uint32 __PPO___tormentModeNotMovingYawScaleMultiplier() { return STRUCT_OFFSET(ATormentMode, _tormentModeNotMovingYawScaleMultiplier); } \
	FORCEINLINE static uint32 __PPO___tormentModeNotMovingYawAdjustTime() { return STRUCT_OFFSET(ATormentMode, _tormentModeNotMovingYawAdjustTime); } \
	FORCEINLINE static uint32 __PPO___tormentModeWalkSpeed() { return STRUCT_OFFSET(ATormentMode, _tormentModeWalkSpeed); } \
	FORCEINLINE static uint32 __PPO___normalWalkSpeed() { return STRUCT_OFFSET(ATormentMode, _normalWalkSpeed); } \
	FORCEINLINE static uint32 __PPO___tormentModeForcedPitch() { return STRUCT_OFFSET(ATormentMode, _tormentModeForcedPitch); } \
	FORCEINLINE static uint32 __PPO___agonyComponentClass() { return STRUCT_OFFSET(ATormentMode, _agonyComponentClass); } \
	FORCEINLINE static uint32 __PPO___killerTormentTrailDetectorClass() { return STRUCT_OFFSET(ATormentMode, _killerTormentTrailDetectorClass); } \
	FORCEINLINE static uint32 __PPO___survivorTormentTrailDetectorClass() { return STRUCT_OFFSET(ATormentMode, _survivorTormentTrailDetectorClass); } \
	FORCEINLINE static uint32 __PPO___tormentModeCooldownInteraction() { return STRUCT_OFFSET(ATormentMode, _tormentModeCooldownInteraction); } \
	FORCEINLINE static uint32 __PPO___tormentModeChargeSpeedCurve() { return STRUCT_OFFSET(ATormentMode, _tormentModeChargeSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___mobileTormentTrailRendererClass() { return STRUCT_OFFSET(ATormentMode, _mobileTormentTrailRendererClass); }


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_22_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class ATormentMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TormentMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
