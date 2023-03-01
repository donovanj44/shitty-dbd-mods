// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AConjoinedTwin;
#ifdef THETWINS_ConjoinedTwinAnimInstance_generated_h
#error "ConjoinedTwinAnimInstance.generated.h already included, missing '#pragma once' in ConjoinedTwinAnimInstance.h"
#endif
#define THETWINS_ConjoinedTwinAnimInstance_generated_h

#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningConjoinedTwin);


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningConjoinedTwin);


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConjoinedTwinAnimInstance(); \
	friend struct Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UConjoinedTwinAnimInstance, UPlayerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UConjoinedTwinAnimInstance)


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUConjoinedTwinAnimInstance(); \
	friend struct Z_Construct_UClass_UConjoinedTwinAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UConjoinedTwinAnimInstance, UPlayerAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UConjoinedTwinAnimInstance)


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConjoinedTwinAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConjoinedTwinAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConjoinedTwinAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConjoinedTwinAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConjoinedTwinAnimInstance(UConjoinedTwinAnimInstance&&); \
	NO_API UConjoinedTwinAnimInstance(const UConjoinedTwinAnimInstance&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConjoinedTwinAnimInstance(UConjoinedTwinAnimInstance&&); \
	NO_API UConjoinedTwinAnimInstance(const UConjoinedTwinAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConjoinedTwinAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConjoinedTwinAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConjoinedTwinAnimInstance)


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owningConjoinedTwin() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _owningConjoinedTwin); } \
	FORCEINLINE static uint32 __PPO___firstPersonView() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _firstPersonView); } \
	FORCEINLINE static uint32 __PPO___forwardVelocity() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _forwardVelocity); } \
	FORCEINLINE static uint32 __PPO___lateralVelocity() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _lateralVelocity); } \
	FORCEINLINE static uint32 __PPO___interactionType() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _interactionType); } \
	FORCEINLINE static uint32 __PPO___isInAir() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isInAir); } \
	FORCEINLINE static uint32 __PPO___isIdle() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isIdle); } \
	FORCEINLINE static uint32 __PPO___idleTime() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _idleTime); } \
	FORCEINLINE static uint32 __PPO___isAttacking() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isAttacking); } \
	FORCEINLINE static uint32 __PPO___attackerComponent() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _attackerComponent); } \
	FORCEINLINE static uint32 __PPO___twinAttachmentComponent() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _twinAttachmentComponent); } \
	FORCEINLINE static uint32 __PPO___twinLockerBlockerComponent() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _twinLockerBlockerComponent); } \
	FORCEINLINE static uint32 __PPO___animYaw() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animYaw); } \
	FORCEINLINE static uint32 __PPO___animPitch() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animPitch); } \
	FORCEINLINE static uint32 __PPO___isSpectator() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isSpectator); } \
	FORCEINLINE static uint32 __PPO___animDirection() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animDirection); } \
	FORCEINLINE static uint32 __PPO___animSpeed() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _animSpeed); } \
	FORCEINLINE static uint32 __PPO___isAttachedToSister() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isAttachedToSister); } \
	FORCEINLINE static uint32 __PPO___isAttachedToSurvivor() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isAttachedToSurvivor); } \
	FORCEINLINE static uint32 __PPO___isAttachedToFemaleSurvivor() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isAttachedToFemaleSurvivor); } \
	FORCEINLINE static uint32 __PPO___isChargingTwinJump() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isChargingTwinJump); } \
	FORCEINLINE static uint32 __PPO___isPossessing() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isPossessing); } \
	FORCEINLINE static uint32 __PPO___isWakingUpFromPossess() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isWakingUpFromPossess); } \
	FORCEINLINE static uint32 __PPO___isDormant() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isDormant); } \
	FORCEINLINE static uint32 __PPO___isBeingAutoPossessedAfterRelease() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isBeingAutoPossessedAfterRelease); } \
	FORCEINLINE static uint32 __PPO___isAttachedToLocker() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _isAttachedToLocker); } \
	FORCEINLINE static uint32 __PPO___attackState() { return STRUCT_OFFSET(UConjoinedTwinAnimInstance, _attackState); }


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_13_PROLOG
#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UConjoinedTwinAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_ConjoinedTwinAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
