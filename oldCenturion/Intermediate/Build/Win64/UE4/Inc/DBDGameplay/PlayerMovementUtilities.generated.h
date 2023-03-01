// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UCurveFloat;
#ifdef DBDGAMEPLAY_PlayerMovementUtilities_generated_h
#error "PlayerMovementUtilities.generated.h already included, missing '#pragma once' in PlayerMovementUtilities.h"
#endif
#define DBDGAMEPLAY_PlayerMovementUtilities_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLocal_ApplyGamepadPitchScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyGamepadYawScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyMousePitchScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyMouseYawScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyPitchScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyRotationScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyYawScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ResetGamepadLookCurves); \
	DECLARE_FUNCTION(execLocal_ResetRotationScale); \
	DECLARE_FUNCTION(execLocal_SetGamepadPitchCurve); \
	DECLARE_FUNCTION(execLocal_SetGamepadYawCurve);


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLocal_ApplyGamepadPitchScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyGamepadYawScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyMousePitchScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyMouseYawScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyPitchScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyRotationScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ApplyYawScaleMultiplier); \
	DECLARE_FUNCTION(execLocal_ResetGamepadLookCurves); \
	DECLARE_FUNCTION(execLocal_ResetRotationScale); \
	DECLARE_FUNCTION(execLocal_SetGamepadPitchCurve); \
	DECLARE_FUNCTION(execLocal_SetGamepadYawCurve);


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMovementUtilities(); \
	friend struct Z_Construct_UClass_UPlayerMovementUtilities_Statics; \
public: \
	DECLARE_CLASS(UPlayerMovementUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMovementUtilities)


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerMovementUtilities(); \
	friend struct Z_Construct_UClass_UPlayerMovementUtilities_Statics; \
public: \
	DECLARE_CLASS(UPlayerMovementUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMovementUtilities)


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMovementUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMovementUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMovementUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMovementUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMovementUtilities(UPlayerMovementUtilities&&); \
	NO_API UPlayerMovementUtilities(const UPlayerMovementUtilities&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerMovementUtilities(UPlayerMovementUtilities&&); \
	NO_API UPlayerMovementUtilities(const UPlayerMovementUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMovementUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMovementUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerMovementUtilities)


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_9_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UPlayerMovementUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_PlayerMovementUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
