// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINITESTATEMACHINE_FSM_State_generated_h
#error "FSM_State.generated.h already included, missing '#pragma once' in FSM_State.h"
#endif
#define FINITESTATEMACHINE_FSM_State_generated_h

#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_SPARSE_DATA
#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_RPC_WRAPPERS
#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFSM_State(); \
	friend struct Z_Construct_UClass_UFSM_State_Statics; \
public: \
	DECLARE_CLASS(UFSM_State, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FiniteStateMachine"), NO_API) \
	DECLARE_SERIALIZER(UFSM_State)


#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUFSM_State(); \
	friend struct Z_Construct_UClass_UFSM_State_Statics; \
public: \
	DECLARE_CLASS(UFSM_State, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FiniteStateMachine"), NO_API) \
	DECLARE_SERIALIZER(UFSM_State)


#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFSM_State(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFSM_State) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFSM_State); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFSM_State); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFSM_State(UFSM_State&&); \
	NO_API UFSM_State(const UFSM_State&); \
public:


#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFSM_State(UFSM_State&&); \
	NO_API UFSM_State(const UFSM_State&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFSM_State); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFSM_State); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFSM_State)


#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___stateName() { return STRUCT_OFFSET(UFSM_State, _stateName); } \
	FORCEINLINE static uint32 __PPO___shouldTick() { return STRUCT_OFFSET(UFSM_State, _shouldTick); } \
	FORCEINLINE static uint32 __PPO___defaultChildStateClass() { return STRUCT_OFFSET(UFSM_State, _defaultChildStateClass); } \
	FORCEINLINE static uint32 __PPO___transitions() { return STRUCT_OFFSET(UFSM_State, _transitions); } \
	FORCEINLINE static uint32 __PPO___stateMachine() { return STRUCT_OFFSET(UFSM_State, _stateMachine); } \
	FORCEINLINE static uint32 __PPO___parentState() { return STRUCT_OFFSET(UFSM_State, _parentState); } \
	FORCEINLINE static uint32 __PPO___currentChildState() { return STRUCT_OFFSET(UFSM_State, _currentChildState); } \
	FORCEINLINE static uint32 __PPO___startTimestamp() { return STRUCT_OFFSET(UFSM_State, _startTimestamp); }


#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_11_PROLOG
#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_SPARSE_DATA \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_INCLASS \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_SPARSE_DATA \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINITESTATEMACHINE_API UClass* StaticClass<class UFSM_State>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_FiniteStateMachine_Public_FSM_State_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
