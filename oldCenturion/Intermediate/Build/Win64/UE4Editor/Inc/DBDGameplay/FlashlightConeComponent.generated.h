// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_FlashlightConeComponent_generated_h
#error "FlashlightConeComponent.generated.h already included, missing '#pragma once' in FlashlightConeComponent.h"
#endif
#define DBDGAMEPLAY_FlashlightConeComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEffectiveConeHalfAngle); \
	DECLARE_FUNCTION(execGetEffectiveConeLength); \
	DECLARE_FUNCTION(execGetOcclusionDistance);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEffectiveConeHalfAngle); \
	DECLARE_FUNCTION(execGetEffectiveConeLength); \
	DECLARE_FUNCTION(execGetOcclusionDistance);


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlashlightConeComponent(); \
	friend struct Z_Construct_UClass_UFlashlightConeComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightConeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightConeComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFlashlightConeComponent(); \
	friend struct Z_Construct_UClass_UFlashlightConeComponent_Statics; \
public: \
	DECLARE_CLASS(UFlashlightConeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UFlashlightConeComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlashlightConeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlashlightConeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightConeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightConeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightConeComponent(UFlashlightConeComponent&&); \
	NO_API UFlashlightConeComponent(const UFlashlightConeComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFlashlightConeComponent(UFlashlightConeComponent&&); \
	NO_API UFlashlightConeComponent(const UFlashlightConeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlashlightConeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlashlightConeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFlashlightConeComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___flashlightBottom() { return STRUCT_OFFSET(UFlashlightConeComponent, _flashlightBottom); } \
	FORCEINLINE static uint32 __PPO___baseBeamAngle() { return STRUCT_OFFSET(UFlashlightConeComponent, _baseBeamAngle); } \
	FORCEINLINE static uint32 __PPO___baseBeamLength() { return STRUCT_OFFSET(UFlashlightConeComponent, _baseBeamLength); } \
	FORCEINLINE static uint32 __PPO___cacheCollidingActor() { return STRUCT_OFFSET(UFlashlightConeComponent, _cacheCollidingActor); }


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_12_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UFlashlightConeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_FlashlightConeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
