// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_OniDemonModeAttackStateComponent_generated_h
#error "OniDemonModeAttackStateComponent.generated.h already included, missing '#pragma once' in OniDemonModeAttackStateComponent.h"
#endif
#define DEADBYDAYLIGHT_OniDemonModeAttackStateComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_6_DELEGATE \
struct _Script_DeadByDaylight_eventOniDemonModeAttackStateComponentOnChargedAttackReadyChanged_Parms \
{ \
	bool bIsReady; \
}; \
static inline void FOniDemonModeAttackStateComponentOnChargedAttackReadyChanged_DelegateWrapper(const FMulticastScriptDelegate& OniDemonModeAttackStateComponentOnChargedAttackReadyChanged, bool bIsReady) \
{ \
	_Script_DeadByDaylight_eventOniDemonModeAttackStateComponentOnChargedAttackReadyChanged_Parms Parms; \
	Parms.bIsReady=bIsReady ? true : false; \
	OniDemonModeAttackStateComponentOnChargedAttackReadyChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_RPC_WRAPPERS \
	virtual void Multicast_ClearChargingState_Implementation(); \
	virtual void Server_ClearChargingState_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ClearChargingState); \
	DECLARE_FUNCTION(execServer_ClearChargingState);


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ClearChargingState_Implementation(); \
	virtual void Server_ClearChargingState_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticast_ClearChargingState); \
	DECLARE_FUNCTION(execServer_ClearChargingState);


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOniDemonModeAttackStateComponent(); \
	friend struct Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics; \
public: \
	DECLARE_CLASS(UOniDemonModeAttackStateComponent, UChargedAttackStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UOniDemonModeAttackStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUOniDemonModeAttackStateComponent(); \
	friend struct Z_Construct_UClass_UOniDemonModeAttackStateComponent_Statics; \
public: \
	DECLARE_CLASS(UOniDemonModeAttackStateComponent, UChargedAttackStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UOniDemonModeAttackStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOniDemonModeAttackStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOniDemonModeAttackStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOniDemonModeAttackStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOniDemonModeAttackStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOniDemonModeAttackStateComponent(UOniDemonModeAttackStateComponent&&); \
	NO_API UOniDemonModeAttackStateComponent(const UOniDemonModeAttackStateComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOniDemonModeAttackStateComponent(UOniDemonModeAttackStateComponent&&); \
	NO_API UOniDemonModeAttackStateComponent(const UOniDemonModeAttackStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOniDemonModeAttackStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOniDemonModeAttackStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOniDemonModeAttackStateComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UOniDemonModeAttackStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_OniDemonModeAttackStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
