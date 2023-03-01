// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_HookableComponent_generated_h
#error "HookableComponent.generated.h already included, missing '#pragma once' in HookableComponent.h"
#endif
#define DEADBYDAYLIGHT_HookableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_RPC_WRAPPERS \
	virtual void Multicast_DebugSetHookDrainStage_Implementation(int32 drainStage); \
	virtual void Multicast_SetDrainTimerPercentLeft_Implementation(float percentTime); \
 \
	DECLARE_FUNCTION(execAuthority_SetDrainTimerPercentLeft); \
	DECLARE_FUNCTION(execGetDrainTimerPercentLeft); \
	DECLARE_FUNCTION(execMulticast_DebugSetHookDrainStage); \
	DECLARE_FUNCTION(execMulticast_SetDrainTimerPercentLeft);


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DebugSetHookDrainStage_Implementation(int32 drainStage); \
	virtual void Multicast_SetDrainTimerPercentLeft_Implementation(float percentTime); \
 \
	DECLARE_FUNCTION(execAuthority_SetDrainTimerPercentLeft); \
	DECLARE_FUNCTION(execGetDrainTimerPercentLeft); \
	DECLARE_FUNCTION(execMulticast_DebugSetHookDrainStage); \
	DECLARE_FUNCTION(execMulticast_SetDrainTimerPercentLeft);


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_EVENT_PARMS \
	struct HookableComponent_eventMulticast_DebugSetHookDrainStage_Parms \
	{ \
		int32 drainStage; \
	}; \
	struct HookableComponent_eventMulticast_SetDrainTimerPercentLeft_Parms \
	{ \
		float percentTime; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHookableComponent(); \
	friend struct Z_Construct_UClass_UHookableComponent_Statics; \
public: \
	DECLARE_CLASS(UHookableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UHookableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUHookableComponent(); \
	friend struct Z_Construct_UClass_UHookableComponent_Statics; \
public: \
	DECLARE_CLASS(UHookableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UHookableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHookableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHookableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHookableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHookableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHookableComponent(UHookableComponent&&); \
	NO_API UHookableComponent(const UHookableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHookableComponent(UHookableComponent&&); \
	NO_API UHookableComponent(const UHookableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHookableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHookableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHookableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_6_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UHookableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_HookableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
