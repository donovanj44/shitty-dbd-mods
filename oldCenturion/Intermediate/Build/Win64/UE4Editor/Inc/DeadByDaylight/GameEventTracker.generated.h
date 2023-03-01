// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDBDScoreTypes : uint8;
class ADBDPlayerState;
class AActor;
#ifdef DEADBYDAYLIGHT_GameEventTracker_generated_h
#error "GameEventTracker.generated.h already included, missing '#pragma once' in GameEventTracker.h"
#endif
#define DEADBYDAYLIGHT_GameEventTracker_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventGameEventTrackerOnGameflowEvent_Parms \
{ \
	EDBDScoreTypes playerGameplayEventType; \
	float amount; \
	const ADBDPlayerState* effector; \
}; \
static inline void FGameEventTrackerOnGameflowEvent_DelegateWrapper(const FMulticastScriptDelegate& GameEventTrackerOnGameflowEvent, EDBDScoreTypes playerGameplayEventType, float amount, const ADBDPlayerState* effector) \
{ \
	_Script_DeadByDaylight_eventGameEventTrackerOnGameflowEvent_Parms Parms; \
	Parms.playerGameplayEventType=playerGameplayEventType; \
	Parms.amount=amount; \
	Parms.effector=effector; \
	GameEventTrackerOnGameflowEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms \
{ \
	EDBDScoreTypes playerGameplayEventType; \
	float amount; \
	AActor* effector; \
	AActor* target; \
}; \
static inline void FGameEventTrackerOnGameplayEvent_DelegateWrapper(const FMulticastScriptDelegate& GameEventTrackerOnGameplayEvent, EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target) \
{ \
	_Script_DeadByDaylight_eventGameEventTrackerOnGameplayEvent_Parms Parms; \
	Parms.playerGameplayEventType=playerGameplayEventType; \
	Parms.amount=amount; \
	Parms.effector=effector; \
	Parms.target=target; \
	GameEventTrackerOnGameplayEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireGameEvent); \
	DECLARE_FUNCTION(execFireGameflowEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireGameEvent); \
	DECLARE_FUNCTION(execFireGameflowEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEventTracker(); \
	friend struct Z_Construct_UClass_UGameEventTracker_Statics; \
public: \
	DECLARE_CLASS(UGameEventTracker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameEventTracker)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameEventTracker(); \
	friend struct Z_Construct_UClass_UGameEventTracker_Statics; \
public: \
	DECLARE_CLASS(UGameEventTracker, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameEventTracker)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEventTracker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEventTracker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEventTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEventTracker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEventTracker(UGameEventTracker&&); \
	NO_API UGameEventTracker(const UGameEventTracker&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEventTracker(UGameEventTracker&&); \
	NO_API UGameEventTracker(const UGameEventTracker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEventTracker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEventTracker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameEventTracker)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGameEventTracker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameEventTracker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
