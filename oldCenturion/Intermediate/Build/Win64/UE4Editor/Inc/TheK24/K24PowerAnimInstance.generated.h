// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEK24_K24PowerAnimInstance_generated_h
#error "K24PowerAnimInstance.generated.h already included, missing '#pragma once' in K24PowerAnimInstance.h"
#endif
#define THEK24_K24PowerAnimInstance_generated_h

#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnKillerPowerLevelChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnKillerPowerLevelChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay);


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK24PowerAnimInstance(); \
	friend struct Z_Construct_UClass_UK24PowerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UK24PowerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24PowerAnimInstance)


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUK24PowerAnimInstance(); \
	friend struct Z_Construct_UClass_UK24PowerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UK24PowerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UK24PowerAnimInstance)


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK24PowerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK24PowerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24PowerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24PowerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24PowerAnimInstance(UK24PowerAnimInstance&&); \
	NO_API UK24PowerAnimInstance(const UK24PowerAnimInstance&); \
public:


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK24PowerAnimInstance(UK24PowerAnimInstance&&); \
	NO_API UK24PowerAnimInstance(const UK24PowerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK24PowerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK24PowerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK24PowerAnimInstance)


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___k24Power() { return STRUCT_OFFSET(UK24PowerAnimInstance, _k24Power); } \
	FORCEINLINE static uint32 __PPO___owningKiller() { return STRUCT_OFFSET(UK24PowerAnimInstance, _owningKiller); } \
	FORCEINLINE static uint32 __PPO___isInPowerMode() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isInPowerMode); } \
	FORCEINLINE static uint32 __PPO___isChargingPower() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isChargingPower); } \
	FORCEINLINE static uint32 __PPO___isK24PowerAttacking() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isK24PowerAttacking); } \
	FORCEINLINE static uint32 __PPO___isRequestingPowerAttack() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isRequestingPowerAttack); } \
	FORCEINLINE static uint32 __PPO___tentacleLength() { return STRUCT_OFFSET(UK24PowerAnimInstance, _tentacleLength); } \
	FORCEINLINE static uint32 __PPO___isFirstPersonView() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isFirstPersonView); } \
	FORCEINLINE static uint32 __PPO___attackSubState() { return STRUCT_OFFSET(UK24PowerAnimInstance, _attackSubState); } \
	FORCEINLINE static uint32 __PPO___isIntroCompleted() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isIntroCompleted); } \
	FORCEINLINE static uint32 __PPO___isLevelReadyToPlay() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isLevelReadyToPlay); } \
	FORCEINLINE static uint32 __PPO___powerLevel() { return STRUCT_OFFSET(UK24PowerAnimInstance, _powerLevel); } \
	FORCEINLINE static uint32 __PPO___forwardVelocity() { return STRUCT_OFFSET(UK24PowerAnimInstance, _forwardVelocity); } \
	FORCEINLINE static uint32 __PPO___lateralVelocity() { return STRUCT_OFFSET(UK24PowerAnimInstance, _lateralVelocity); } \
	FORCEINLINE static uint32 __PPO___isKilling() { return STRUCT_OFFSET(UK24PowerAnimInstance, _isKilling); }


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_10_PROLOG
#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_INCLASS \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UK24PowerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_K24PowerAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
