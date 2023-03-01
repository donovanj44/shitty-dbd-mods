// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
struct FGameEventDispatcherHandleBP;
#ifdef DEADBYDAYLIGHT_GameEventDispatcher_generated_h
#error "GameEventDispatcher.generated.h already included, missing '#pragma once' in GameEventDispatcher.h"
#endif
#define DEADBYDAYLIGHT_GameEventDispatcher_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_AccumulateOngoingGameEvent); \
	DECLARE_FUNCTION(execAuthority_RemotelyDispatch); \
	DECLARE_FUNCTION(execLocallyDispatch); \
	DECLARE_FUNCTION(execRegisterListener); \
	DECLARE_FUNCTION(execRemotelyDispatch); \
	DECLARE_FUNCTION(execUnregisterListener);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_AccumulateOngoingGameEvent); \
	DECLARE_FUNCTION(execAuthority_RemotelyDispatch); \
	DECLARE_FUNCTION(execLocallyDispatch); \
	DECLARE_FUNCTION(execRegisterListener); \
	DECLARE_FUNCTION(execRemotelyDispatch); \
	DECLARE_FUNCTION(execUnregisterListener);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameEventDispatcher(); \
	friend struct Z_Construct_UClass_UGameEventDispatcher_Statics; \
public: \
	DECLARE_CLASS(UGameEventDispatcher, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameEventDispatcher)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGameEventDispatcher(); \
	friend struct Z_Construct_UClass_UGameEventDispatcher_Statics; \
public: \
	DECLARE_CLASS(UGameEventDispatcher, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameEventDispatcher)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameEventDispatcher(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameEventDispatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEventDispatcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEventDispatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEventDispatcher(UGameEventDispatcher&&); \
	NO_API UGameEventDispatcher(const UGameEventDispatcher&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameEventDispatcher(UGameEventDispatcher&&); \
	NO_API UGameEventDispatcher(const UGameEventDispatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameEventDispatcher); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameEventDispatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameEventDispatcher)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___ongoingEvents() { return STRUCT_OFFSET(UGameEventDispatcher, _ongoingEvents); }


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGameEventDispatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameEventDispatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
