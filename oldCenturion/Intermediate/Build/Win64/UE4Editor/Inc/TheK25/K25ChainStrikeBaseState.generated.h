// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AK25Gateway;
class AK25Power;
class ADBDPlayer;
#ifdef THEK25_K25ChainStrikeBaseState_generated_h
#error "K25ChainStrikeBaseState.generated.h already included, missing '#pragma once' in K25ChainStrikeBaseState.h"
#endif
#define THEK25_K25ChainStrikeBaseState_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetK25Gateway); \
	DECLARE_FUNCTION(execGetK25Power); \
	DECLARE_FUNCTION(execGetPlayerOwner);


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetK25Gateway); \
	DECLARE_FUNCTION(execGetK25Power); \
	DECLARE_FUNCTION(execGetPlayerOwner);


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25ChainStrikeBaseState(); \
	friend struct Z_Construct_UClass_UK25ChainStrikeBaseState_Statics; \
public: \
	DECLARE_CLASS(UK25ChainStrikeBaseState, UFSM_State, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainStrikeBaseState)


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUK25ChainStrikeBaseState(); \
	friend struct Z_Construct_UClass_UK25ChainStrikeBaseState_Statics; \
public: \
	DECLARE_CLASS(UK25ChainStrikeBaseState, UFSM_State, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25ChainStrikeBaseState)


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25ChainStrikeBaseState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25ChainStrikeBaseState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainStrikeBaseState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainStrikeBaseState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainStrikeBaseState(UK25ChainStrikeBaseState&&); \
	NO_API UK25ChainStrikeBaseState(const UK25ChainStrikeBaseState&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25ChainStrikeBaseState(UK25ChainStrikeBaseState&&); \
	NO_API UK25ChainStrikeBaseState(const UK25ChainStrikeBaseState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25ChainStrikeBaseState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25ChainStrikeBaseState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25ChainStrikeBaseState)


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___secondaryInteractionIDs() { return STRUCT_OFFSET(UK25ChainStrikeBaseState, _secondaryInteractionIDs); }


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_10_PROLOG
#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25ChainStrikeBaseState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25ChainStrikeBaseState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
