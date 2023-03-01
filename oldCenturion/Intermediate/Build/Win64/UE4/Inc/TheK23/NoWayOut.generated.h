// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class AEscapeDoor;
#ifdef THEK23_NoWayOut_generated_h
#error "NoWayOut.generated.h already included, missing '#pragma once' in NoWayOut.h"
#endif
#define THEK23_NoWayOut_generated_h

#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_RPC_WRAPPERS \
	virtual void Multicast_TriggerLoudNoise_Implementation(ADBDPlayer* instigator, AEscapeDoor* escapeDoor); \
 \
	DECLARE_FUNCTION(execMulticast_TriggerLoudNoise);


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TriggerLoudNoise_Implementation(ADBDPlayer* instigator, AEscapeDoor* escapeDoor); \
 \
	DECLARE_FUNCTION(execMulticast_TriggerLoudNoise);


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_EVENT_PARMS \
	struct NoWayOut_eventMulticast_TriggerLoudNoise_Parms \
	{ \
		ADBDPlayer* instigator; \
		AEscapeDoor* escapeDoor; \
	};


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNoWayOut(); \
	friend struct Z_Construct_UClass_UNoWayOut_Statics; \
public: \
	DECLARE_CLASS(UNoWayOut, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UNoWayOut)


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUNoWayOut(); \
	friend struct Z_Construct_UClass_UNoWayOut_Statics; \
public: \
	DECLARE_CLASS(UNoWayOut, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK23"), NO_API) \
	DECLARE_SERIALIZER(UNoWayOut)


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNoWayOut(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNoWayOut) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoWayOut); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoWayOut); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoWayOut(UNoWayOut&&); \
	NO_API UNoWayOut(const UNoWayOut&); \
public:


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNoWayOut(UNoWayOut&&); \
	NO_API UNoWayOut(const UNoWayOut&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNoWayOut); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNoWayOut); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNoWayOut)


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___exitGatePanelBlockBaseDuration() { return STRUCT_OFFSET(UNoWayOut, _exitGatePanelBlockBaseDuration); } \
	FORCEINLINE static uint32 __PPO___exitGatePanelBlockDurationPerToken() { return STRUCT_OFFSET(UNoWayOut, _exitGatePanelBlockDurationPerToken); } \
	FORCEINLINE static uint32 __PPO___hookedSurvivors() { return STRUCT_OFFSET(UNoWayOut, _hookedSurvivors); }


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_10_PROLOG \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_EVENT_PARMS


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_INCLASS \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK23_Public_NoWayOut_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK23_API UClass* StaticClass<class UNoWayOut>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK23_Public_NoWayOut_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
