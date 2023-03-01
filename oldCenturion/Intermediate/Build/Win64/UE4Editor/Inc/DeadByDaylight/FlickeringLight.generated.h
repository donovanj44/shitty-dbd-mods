// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULocalLightComponent;
#ifdef DEADBYDAYLIGHT_FlickeringLight_generated_h
#error "FlickeringLight.generated.h already included, missing '#pragma once' in FlickeringLight.h"
#endif
#define DEADBYDAYLIGHT_FlickeringLight_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActiveLightComponent); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execStartFlickering); \
	DECLARE_FUNCTION(execStopFlickering);


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActiveLightComponent); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execStartFlickering); \
	DECLARE_FUNCTION(execStopFlickering);


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlickeringLight(); \
	friend struct Z_Construct_UClass_AFlickeringLight_Statics; \
public: \
	DECLARE_CLASS(AFlickeringLight, AGeneratorDrivenActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AFlickeringLight)


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAFlickeringLight(); \
	friend struct Z_Construct_UClass_AFlickeringLight_Statics; \
public: \
	DECLARE_CLASS(AFlickeringLight, AGeneratorDrivenActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AFlickeringLight)


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlickeringLight(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlickeringLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlickeringLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlickeringLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlickeringLight(AFlickeringLight&&); \
	NO_API AFlickeringLight(const AFlickeringLight&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlickeringLight(AFlickeringLight&&); \
	NO_API AFlickeringLight(const AFlickeringLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlickeringLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlickeringLight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlickeringLight)


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___lightComponentType() { return STRUCT_OFFSET(AFlickeringLight, _lightComponentType); } \
	FORCEINLINE static uint32 __PPO___detailLevelBeforeCastShadows() { return STRUCT_OFFSET(AFlickeringLight, _detailLevelBeforeCastShadows); } \
	FORCEINLINE static uint32 __PPO___castShadow() { return STRUCT_OFFSET(AFlickeringLight, _castShadow); } \
	FORCEINLINE static uint32 __PPO___innerConneAngle() { return STRUCT_OFFSET(AFlickeringLight, _innerConneAngle); } \
	FORCEINLINE static uint32 __PPO___outerConneAngle() { return STRUCT_OFFSET(AFlickeringLight, _outerConneAngle); } \
	FORCEINLINE static uint32 __PPO___sourceLength() { return STRUCT_OFFSET(AFlickeringLight, _sourceLength); } \
	FORCEINLINE static uint32 __PPO___sourceRadius() { return STRUCT_OFFSET(AFlickeringLight, _sourceRadius); } \
	FORCEINLINE static uint32 __PPO___intensity() { return STRUCT_OFFSET(AFlickeringLight, _intensity); } \
	FORCEINLINE static uint32 __PPO___generatorActivated() { return STRUCT_OFFSET(AFlickeringLight, _generatorActivated); } \
	FORCEINLINE static uint32 __PPO___isTimelineSpeedRandom() { return STRUCT_OFFSET(AFlickeringLight, _isTimelineSpeedRandom); } \
	FORCEINLINE static uint32 __PPO___maximumTimelimeSpeed() { return STRUCT_OFFSET(AFlickeringLight, _maximumTimelimeSpeed); } \
	FORCEINLINE static uint32 __PPO___minimumTimelimeSpeed() { return STRUCT_OFFSET(AFlickeringLight, _minimumTimelimeSpeed); } \
	FORCEINLINE static uint32 __PPO___secondaryLightIntensity() { return STRUCT_OFFSET(AFlickeringLight, _secondaryLightIntensity); } \
	FORCEINLINE static uint32 __PPO___secondaryLightTransform() { return STRUCT_OFFSET(AFlickeringLight, _secondaryLightTransform); } \
	FORCEINLINE static uint32 __PPO___secondaryLightRotation() { return STRUCT_OFFSET(AFlickeringLight, _secondaryLightRotation); } \
	FORCEINLINE static uint32 __PPO___secondaryLightAttenuationRadius() { return STRUCT_OFFSET(AFlickeringLight, _secondaryLightAttenuationRadius); } \
	FORCEINLINE static uint32 __PPO___secondaryLightColor() { return STRUCT_OFFSET(AFlickeringLight, _secondaryLightColor); } \
	FORCEINLINE static uint32 __PPO___secondaryLightSpecularScale() { return STRUCT_OFFSET(AFlickeringLight, _secondaryLightSpecularScale); } \
	FORCEINLINE static uint32 __PPO___lightIntensityTimeline() { return STRUCT_OFFSET(AFlickeringLight, _lightIntensityTimeline); } \
	FORCEINLINE static uint32 __PPO___pointLightComponent() { return STRUCT_OFFSET(AFlickeringLight, _pointLightComponent); } \
	FORCEINLINE static uint32 __PPO___secondaryPointLightComponent() { return STRUCT_OFFSET(AFlickeringLight, _secondaryPointLightComponent); } \
	FORCEINLINE static uint32 __PPO___rectLightComponent() { return STRUCT_OFFSET(AFlickeringLight, _rectLightComponent); } \
	FORCEINLINE static uint32 __PPO___spotLightComponent() { return STRUCT_OFFSET(AFlickeringLight, _spotLightComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_20_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AFlickeringLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_FlickeringLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
