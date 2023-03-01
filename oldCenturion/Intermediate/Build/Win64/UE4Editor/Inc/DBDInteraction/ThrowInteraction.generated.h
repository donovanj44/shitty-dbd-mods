// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDINTERACTION_ThrowInteraction_generated_h
#error "ThrowInteraction.generated.h already included, missing '#pragma once' in ThrowInteraction.h"
#endif
#define DBDINTERACTION_ThrowInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasCancelledThrow); \
	DECLARE_FUNCTION(execInitThrowCancellationExitTime);


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasCancelledThrow); \
	DECLARE_FUNCTION(execInitThrowCancellationExitTime);


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThrowInteraction(); \
	friend struct Z_Construct_UClass_UThrowInteraction_Statics; \
public: \
	DECLARE_CLASS(UThrowInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UThrowInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUThrowInteraction(); \
	friend struct Z_Construct_UClass_UThrowInteraction_Statics; \
public: \
	DECLARE_CLASS(UThrowInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UThrowInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThrowInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrowInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrowInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrowInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrowInteraction(UThrowInteraction&&); \
	NO_API UThrowInteraction(const UThrowInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrowInteraction(UThrowInteraction&&); \
	NO_API UThrowInteraction(const UThrowInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrowInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrowInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UThrowInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___throwCancelledSpeedCurve() { return STRUCT_OFFSET(UThrowInteraction, _throwCancelledSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___throwCancellationExitTime() { return STRUCT_OFFSET(UThrowInteraction, _throwCancellationExitTime); }


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_8_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UThrowInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_ThrowInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
