// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDGAMEPLAY_FlashlightFXComponent_generated_h
#error "FlashlightFXComponent.generated.h already included, missing '#pragma once' in FlashlightFXComponent.h"
#endif
#define DBDGAMEPLAY_FlashlightFXComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_14_DELEGATE \
static inline void FFlashlightFXComponentOnFlashEvent_DelegateWrapper(const FMulticastScriptDelegate& FlashlightFXComponentOnFlashEvent) \
{ \
	FlashlightFXComponentOnFlashEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBlindingSuccessRatio); \
	DECLARE_FUNCTION(execOnTurnedOff); \
	DECLARE_FUNCTION(execOnTurnedOn); \
	DECLARE_FUNCTION(execUpdateFXTargets);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlindingSuccessRatio); \
	DECLARE_FUNCTION(execOnTurnedOff); \
	DECLARE_FUNCTION(execOnTurnedOn); \
	DECLARE_FUNCTION(execUpdateFXTargets);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_EVENT_PARMS \
	struct FlashlightFXComponent_eventOnCollectedEvent_Parms \
	{ \
		ADBDPlayer* collector; \
	}; \
	struct FlashlightFXComponent_eventOnCollectorLocallyObservedChangedEvent_Parms \
	{ \
		bool isLocallyObserved; \
	}; \
	struct FlashlightFXComponent_eventUpdateConeEvent_Parms \
	{ \
		float length; \
		float halfAngle; \
	};


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlashlightFXComponent(); \
	friend struct Z_Construct_UClass_UFlashlightFXComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightFXComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFlashlightFXComponent(); \
	friend struct Z_Construct_UClass_UFlashlightFXComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightFXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightFXComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlashlightFXComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlashlightFXComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightFXComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightFXComponent(UFlashlightFXComponent&&); \
	NO_API UFlashlightFXComponent(const UFlashlightFXComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightFXComponent(UFlashlightFXComponent&&); \
	NO_API UFlashlightFXComponent(const UFlashlightFXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightFXComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightFXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlashlightFXComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tip() { return STRUCT_OFFSET(UFlashlightFXComponent, _tip); } \
	FORCEINLINE static uint32 __PPO___centerGlowMesh() { return STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowMesh); } \
	FORCEINLINE static uint32 __PPO___beamMesh() { return STRUCT_OFFSET(UFlashlightFXComponent, _beamMesh); } \
	FORCEINLINE static uint32 __PPO___minimumOcclusionDistanceForSpotlight() { return STRUCT_OFFSET(UFlashlightFXComponent, _minimumOcclusionDistanceForSpotlight); } \
	FORCEINLINE static uint32 __PPO___flashEffectIntensityCurve() { return STRUCT_OFFSET(UFlashlightFXComponent, _flashEffectIntensityCurve); } \
	FORCEINLINE static uint32 __PPO___flashEffectDuration() { return STRUCT_OFFSET(UFlashlightFXComponent, _flashEffectDuration); } \
	FORCEINLINE static uint32 __PPO___spotLightHalfAngle() { return STRUCT_OFFSET(UFlashlightFXComponent, _spotLightHalfAngle); } \
	FORCEINLINE static uint32 __PPO___spotLightIntensity() { return STRUCT_OFFSET(UFlashlightFXComponent, _spotLightIntensity); } \
	FORCEINLINE static uint32 __PPO___visualReworkSpotLightIntensity() { return STRUCT_OFFSET(UFlashlightFXComponent, _visualReworkSpotLightIntensity); } \
	FORCEINLINE static uint32 __PPO___beamBlindingHalfAngle() { return STRUCT_OFFSET(UFlashlightFXComponent, _beamBlindingHalfAngle); } \
	FORCEINLINE static uint32 __PPO___beamFlashHalfAngle() { return STRUCT_OFFSET(UFlashlightFXComponent, _beamFlashHalfAngle); } \
	FORCEINLINE static uint32 __PPO___beamBlindingRatioInterpSpeedWithTarget() { return STRUCT_OFFSET(UFlashlightFXComponent, _beamBlindingRatioInterpSpeedWithTarget); } \
	FORCEINLINE static uint32 __PPO___beamBlindingRatioInterpSpeedWithoutTarget() { return STRUCT_OFFSET(UFlashlightFXComponent, _beamBlindingRatioInterpSpeedWithoutTarget); } \
	FORCEINLINE static uint32 __PPO___resizeConeLength() { return STRUCT_OFFSET(UFlashlightFXComponent, _resizeConeLength); } \
	FORCEINLINE static uint32 __PPO___centerGlowWidthScaleWithoutBlindTarget() { return STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowWidthScaleWithoutBlindTarget); } \
	FORCEINLINE static uint32 __PPO___centerGlowWidthScaleWithBlindTarget() { return STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowWidthScaleWithBlindTarget); } \
	FORCEINLINE static uint32 __PPO___centerGlowWidthScaleDuringFlash() { return STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowWidthScaleDuringFlash); } \
	FORCEINLINE static uint32 __PPO___centerGlowShrinkDistance() { return STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowShrinkDistance); } \
	FORCEINLINE static uint32 __PPO___centerGlowLengthMaxScale() { return STRUCT_OFFSET(UFlashlightFXComponent, _centerGlowLengthMaxScale); } \
	FORCEINLINE static uint32 __PPO___aimedAtSoundLoop() { return STRUCT_OFFSET(UFlashlightFXComponent, _aimedAtSoundLoop); } \
	FORCEINLINE static uint32 __PPO___currentBeamModifyingTarget() { return STRUCT_OFFSET(UFlashlightFXComponent, _currentBeamModifyingTarget); } \
	FORCEINLINE static uint32 __PPO___targets() { return STRUCT_OFFSET(UFlashlightFXComponent, _targets); }


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_16_PROLOG \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UFlashlightFXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_FlashlightFXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
