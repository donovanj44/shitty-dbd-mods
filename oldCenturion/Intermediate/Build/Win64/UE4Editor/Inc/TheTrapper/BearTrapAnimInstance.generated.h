// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THETRAPPER_BearTrapAnimInstance_generated_h
#error "BearTrapAnimInstance.generated.h already included, missing '#pragma once' in BearTrapAnimInstance.h"
#endif
#define THETRAPPER_BearTrapAnimInstance_generated_h

#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_SPARSE_DATA
#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetContainsSurvivor); \
	DECLARE_FUNCTION(execSetIsBeingCollected); \
	DECLARE_FUNCTION(execSetIsTrapSet); \
	DECLARE_FUNCTION(execSetWasJustDisarmed);


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetContainsSurvivor); \
	DECLARE_FUNCTION(execSetIsBeingCollected); \
	DECLARE_FUNCTION(execSetIsTrapSet); \
	DECLARE_FUNCTION(execSetWasJustDisarmed);


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBearTrapAnimInstance(); \
	friend struct Z_Construct_UClass_UBearTrapAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBearTrapAnimInstance, USleepingAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(UBearTrapAnimInstance)


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUBearTrapAnimInstance(); \
	friend struct Z_Construct_UClass_UBearTrapAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBearTrapAnimInstance, USleepingAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheTrapper"), NO_API) \
	DECLARE_SERIALIZER(UBearTrapAnimInstance)


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBearTrapAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBearTrapAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBearTrapAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBearTrapAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBearTrapAnimInstance(UBearTrapAnimInstance&&); \
	NO_API UBearTrapAnimInstance(const UBearTrapAnimInstance&); \
public:


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBearTrapAnimInstance(UBearTrapAnimInstance&&); \
	NO_API UBearTrapAnimInstance(const UBearTrapAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBearTrapAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBearTrapAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBearTrapAnimInstance)


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isBroken() { return STRUCT_OFFSET(UBearTrapAnimInstance, _isBroken); } \
	FORCEINLINE static uint32 __PPO___isBeingCollected() { return STRUCT_OFFSET(UBearTrapAnimInstance, _isBeingCollected); } \
	FORCEINLINE static uint32 __PPO___containsSurvivor() { return STRUCT_OFFSET(UBearTrapAnimInstance, _containsSurvivor); } \
	FORCEINLINE static uint32 __PPO___isTrapSet() { return STRUCT_OFFSET(UBearTrapAnimInstance, _isTrapSet); } \
	FORCEINLINE static uint32 __PPO___wasJustDisarmed() { return STRUCT_OFFSET(UBearTrapAnimInstance, _wasJustDisarmed); }


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_6_PROLOG
#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_INCLASS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETRAPPER_API UClass* StaticClass<class UBearTrapAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTrapper_Public_BearTrapAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
