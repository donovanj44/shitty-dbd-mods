// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AGlyph;
class ADBDPlayer;
#ifdef ARCHIVES_PurpleGlyphComponent_generated_h
#error "PurpleGlyphComponent.generated.h already included, missing '#pragma once' in PurpleGlyphComponent.h"
#endif
#define ARCHIVES_PurpleGlyphComponent_generated_h

#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_SPARSE_DATA
#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_AbortMove); \
	DECLARE_FUNCTION(execAuthority_AbortMoveWithDeceleration); \
	DECLARE_FUNCTION(execAuthority_GetNextLocation); \
	DECLARE_FUNCTION(execAuthority_MoveTo); \
	DECLARE_FUNCTION(execAuthority_StartMoveWithAcceleration); \
	DECLARE_FUNCTION(execGetOwningGlyph); \
	DECLARE_FUNCTION(execGetTrackedPlayer); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_AbortMove); \
	DECLARE_FUNCTION(execAuthority_AbortMoveWithDeceleration); \
	DECLARE_FUNCTION(execAuthority_GetNextLocation); \
	DECLARE_FUNCTION(execAuthority_MoveTo); \
	DECLARE_FUNCTION(execAuthority_StartMoveWithAcceleration); \
	DECLARE_FUNCTION(execGetOwningGlyph); \
	DECLARE_FUNCTION(execGetTrackedPlayer); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_EVENT_PARMS \
	struct PurpleGlyphComponent_eventResumeGlyphMovement_Parms \
	{ \
		bool useAcceleration; \
	}; \
	struct PurpleGlyphComponent_eventStopGlyphMovement_Parms \
	{ \
		bool useDeceleration; \
	};


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPurpleGlyphComponent(); \
	friend struct Z_Construct_UClass_UPurpleGlyphComponent_Statics; \
public: \
	DECLARE_CLASS(UPurpleGlyphComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UPurpleGlyphComponent)


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUPurpleGlyphComponent(); \
	friend struct Z_Construct_UClass_UPurpleGlyphComponent_Statics; \
public: \
	DECLARE_CLASS(UPurpleGlyphComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UPurpleGlyphComponent)


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPurpleGlyphComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPurpleGlyphComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPurpleGlyphComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPurpleGlyphComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPurpleGlyphComponent(UPurpleGlyphComponent&&); \
	NO_API UPurpleGlyphComponent(const UPurpleGlyphComponent&); \
public:


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPurpleGlyphComponent(UPurpleGlyphComponent&&); \
	NO_API UPurpleGlyphComponent(const UPurpleGlyphComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPurpleGlyphComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPurpleGlyphComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPurpleGlyphComponent)


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___survivorSpawns() { return STRUCT_OFFSET(UPurpleGlyphComponent, _survivorSpawns); } \
	FORCEINLINE static uint32 __PPO__MoveRequest() { return STRUCT_OFFSET(UPurpleGlyphComponent, MoveRequest); } \
	FORCEINLINE static uint32 __PPO___navFilter() { return STRUCT_OFFSET(UPurpleGlyphComponent, _navFilter); } \
	FORCEINLINE static uint32 __PPO___auraRevealDuration() { return STRUCT_OFFSET(UPurpleGlyphComponent, _auraRevealDuration); } \
	FORCEINLINE static uint32 __PPO___nextLocationDistanceMinimum() { return STRUCT_OFFSET(UPurpleGlyphComponent, _nextLocationDistanceMinimum); } \
	FORCEINLINE static uint32 __PPO___nextLocationDistanceMaximum() { return STRUCT_OFFSET(UPurpleGlyphComponent, _nextLocationDistanceMaximum); } \
	FORCEINLINE static uint32 __PPO___movementAcceptanceRadius() { return STRUCT_OFFSET(UPurpleGlyphComponent, _movementAcceptanceRadius); } \
	FORCEINLINE static uint32 __PPO___distanceToAccelerate() { return STRUCT_OFFSET(UPurpleGlyphComponent, _distanceToAccelerate); } \
	FORCEINLINE static uint32 __PPO___distanceToDecelerate() { return STRUCT_OFFSET(UPurpleGlyphComponent, _distanceToDecelerate); } \
	FORCEINLINE static uint32 __PPO__outlineColor() { return STRUCT_OFFSET(UPurpleGlyphComponent, outlineColor); } \
	FORCEINLINE static uint32 __PPO___bloodTrailSettings() { return STRUCT_OFFSET(UPurpleGlyphComponent, _bloodTrailSettings); }


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_17_PROLOG \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_EVENT_PARMS


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_INCLASS \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVES_API UClass* StaticClass<class UPurpleGlyphComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_PurpleGlyphComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
