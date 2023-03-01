// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTimerObject;
struct FReplicationTimerData;
#ifdef NETWORKUTILITIES_TimerObject_generated_h
#error "TimerObject.generated.h already included, missing '#pragma once' in TimerObject.h"
#endif
#define NETWORKUTILITIES_TimerObject_generated_h

#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_SPARSE_DATA
#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_Clear); \
	DECLARE_FUNCTION(execAuthority_Pause); \
	DECLARE_FUNCTION(execAuthority_SetPaused); \
	DECLARE_FUNCTION(execAuthority_Start); \
	DECLARE_FUNCTION(execAuthority_Unpause); \
	DECLARE_FUNCTION(execCreateTimer); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execGetElapsedTimePercent); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execGetRemainingTimePercent); \
	DECLARE_FUNCTION(execIsDone); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsTimerActive); \
	DECLARE_FUNCTION(execOnRep_TimerDataUpdated);


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_Clear); \
	DECLARE_FUNCTION(execAuthority_Pause); \
	DECLARE_FUNCTION(execAuthority_SetPaused); \
	DECLARE_FUNCTION(execAuthority_Start); \
	DECLARE_FUNCTION(execAuthority_Unpause); \
	DECLARE_FUNCTION(execCreateTimer); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetElapsedTime); \
	DECLARE_FUNCTION(execGetElapsedTimePercent); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execGetRemainingTimePercent); \
	DECLARE_FUNCTION(execIsDone); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execIsTimerActive); \
	DECLARE_FUNCTION(execOnRep_TimerDataUpdated);


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimerObject(); \
	friend struct Z_Construct_UClass_UTimerObject_Statics; \
public: \
	DECLARE_CLASS(UTimerObject, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(UTimerObject) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicationData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_replicationData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUTimerObject(); \
	friend struct Z_Construct_UClass_UTimerObject_Statics; \
public: \
	DECLARE_CLASS(UTimerObject, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(UTimerObject) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_replicationData=NETFIELD_REP_START, \
		NETFIELD_REP_END=_replicationData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimerObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimerObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimerObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimerObject(UTimerObject&&); \
	NO_API UTimerObject(const UTimerObject&); \
public:


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimerObject(UTimerObject&&); \
	NO_API UTimerObject(const UTimerObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimerObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimerObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimerObject)


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___replicationData() { return STRUCT_OFFSET(UTimerObject, _replicationData); }


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_10_PROLOG
#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_SPARSE_DATA \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_INCLASS \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_SPARSE_DATA \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKUTILITIES_API UClass* StaticClass<class UTimerObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_NetworkUtilities_Public_TimerObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
