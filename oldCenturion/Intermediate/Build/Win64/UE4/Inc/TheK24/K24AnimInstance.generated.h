// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_K24AnimInstance_generated_h
#error "K24AnimInstance.generated.h already included, missing '#pragma once' in K24AnimInstance.h"
#endif
#define THEK24_K24AnimInstance_generated_h

#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnKillerPowerLevelChanged);


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnKillerPowerLevelChanged);


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK24AnimInstance(); \
	friend struct Z_Construct_UClass_UK24AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UK24AnimInstance, UKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24AnimInstance)


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUK24AnimInstance(); \
	friend struct Z_Construct_UClass_UK24AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UK24AnimInstance, UKillerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24AnimInstance)


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK24AnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK24AnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24AnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24AnimInstance(UK24AnimInstance&&); \
	NO_API UK24AnimInstance(const UK24AnimInstance&); \
public:


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24AnimInstance(UK24AnimInstance&&); \
	NO_API UK24AnimInstance(const UK24AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24AnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK24AnimInstance)


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInPowerMode() { return STRUCT_OFFSET(UK24AnimInstance, _isInPowerMode); } \
	FORCEINLINE static uint32 __PPO___isChargingPower() { return STRUCT_OFFSET(UK24AnimInstance, _isChargingPower); } \
	FORCEINLINE static uint32 __PPO___isK24PowerAttacking() { return STRUCT_OFFSET(UK24AnimInstance, _isK24PowerAttacking); } \
	FORCEINLINE static uint32 __PPO___isRequestingPowerAttack() { return STRUCT_OFFSET(UK24AnimInstance, _isRequestingPowerAttack); } \
	FORCEINLINE static uint32 __PPO___powerLevel() { return STRUCT_OFFSET(UK24AnimInstance, _powerLevel); }


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_6_PROLOG
#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_INCLASS \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UK24AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_K24AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
