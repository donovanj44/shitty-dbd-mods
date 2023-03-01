// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInteractable;
class UInteractionDefinition;
struct FVector;
class ADBDPlayer;
struct FRotator;
struct FTransform;
#ifdef DEADBYDAYLIGHT_InterruptionDefinition_generated_h
#error "InterruptionDefinition.generated.h already included, missing '#pragma once' in InterruptionDefinition.h"
#endif
#define DEADBYDAYLIGHT_InterruptionDefinition_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_RPC_WRAPPERS \
	virtual FVector GetInterruptionSnapPointPositionForInterruptor_Implementation(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const; \
	virtual FRotator GetInterruptionSnapPointRotationForInterruptor_Implementation(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const; \
	virtual bool IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee) const; \
 \
	DECLARE_FUNCTION(execCanInterruptWhileCarrying); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractionDefinition); \
	DECLARE_FUNCTION(execGetInterruptionSnapPointPositionForInterruptor); \
	DECLARE_FUNCTION(execGetInterruptionSnapPointRotationForInterruptor); \
	DECLARE_FUNCTION(execInteractionCheckHeightDelta); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execIsUsingAttack); \
	DECLARE_FUNCTION(execIsUsingMontageFollower); \
	DECLARE_FUNCTION(execSetInterruptorSnapPoint);


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetInterruptionSnapPointPositionForInterruptor_Implementation(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const; \
	virtual FRotator GetInterruptionSnapPointRotationForInterruptor_Implementation(const ADBDPlayer* Interruptor, const ADBDPlayer* Interruptee) const; \
	virtual bool IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee) const; \
 \
	DECLARE_FUNCTION(execCanInterruptWhileCarrying); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractionDefinition); \
	DECLARE_FUNCTION(execGetInterruptionSnapPointPositionForInterruptor); \
	DECLARE_FUNCTION(execGetInterruptionSnapPointRotationForInterruptor); \
	DECLARE_FUNCTION(execInteractionCheckHeightDelta); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execIsUsingAttack); \
	DECLARE_FUNCTION(execIsUsingMontageFollower); \
	DECLARE_FUNCTION(execSetInterruptorSnapPoint);


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_EVENT_PARMS \
	struct InterruptionDefinition_eventGetInterruptionSnapPointPositionForInterruptor_Parms \
	{ \
		const ADBDPlayer* Interruptor; \
		const ADBDPlayer* Interruptee; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InterruptionDefinition_eventGetInterruptionSnapPointPositionForInterruptor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct InterruptionDefinition_eventGetInterruptionSnapPointRotationForInterruptor_Parms \
	{ \
		const ADBDPlayer* Interruptor; \
		const ADBDPlayer* Interruptee; \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InterruptionDefinition_eventGetInterruptionSnapPointRotationForInterruptor_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct InterruptionDefinition_eventIsInterruptionPossible_Parms \
	{ \
		const ADBDPlayer* interruptor; \
		const ADBDPlayer* interruptee; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InterruptionDefinition_eventIsInterruptionPossible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InterruptionDefinition_eventOnInterruptionEnterStart_Parms \
	{ \
		ADBDPlayer* interruptor; \
		ADBDPlayer* interruptee; \
	}; \
	struct InterruptionDefinition_eventOnInterruptionExitEnd_Parms \
	{ \
		ADBDPlayer* interruptor; \
		ADBDPlayer* interruptee; \
	}; \
	struct InterruptionDefinition_eventOnInterruptionUpdateStart_Parms \
	{ \
		ADBDPlayer* interruptor; \
		ADBDPlayer* interruptee; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterruptionDefinition(); \
	friend struct Z_Construct_UClass_UInterruptionDefinition_Statics; \
public: \
	DECLARE_CLASS(UInterruptionDefinition, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInterruptionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInterruptionDefinition(); \
	friend struct Z_Construct_UClass_UInterruptionDefinition_Statics; \
public: \
	DECLARE_CLASS(UInterruptionDefinition, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInterruptionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterruptionDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterruptionDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterruptionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterruptionDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterruptionDefinition(UInterruptionDefinition&&); \
	NO_API UInterruptionDefinition(const UInterruptionDefinition&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterruptionDefinition(UInterruptionDefinition&&); \
	NO_API UInterruptionDefinition(const UInterruptionDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterruptionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterruptionDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterruptionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___usesWorldCoordinates() { return STRUCT_OFFSET(UInterruptionDefinition, _usesWorldCoordinates); } \
	FORCEINLINE static uint32 __PPO___snapInterruptor() { return STRUCT_OFFSET(UInterruptionDefinition, _snapInterruptor); } \
	FORCEINLINE static uint32 __PPO___interruptionSnapPointForInterruptor() { return STRUCT_OFFSET(UInterruptionDefinition, _interruptionSnapPointForInterruptor); } \
	FORCEINLINE static uint32 __PPO___animationMontageToPlayOnInterruptionEnterForInterruptor() { return STRUCT_OFFSET(UInterruptionDefinition, _animationMontageToPlayOnInterruptionEnterForInterruptor); } \
	FORCEINLINE static uint32 __PPO___animationMontageToPlayOnInterruptionForInterruptorNew() { return STRUCT_OFFSET(UInterruptionDefinition, _animationMontageToPlayOnInterruptionForInterruptorNew); } \
	FORCEINLINE static uint32 __PPO___animationMontageToPlayOnInterruptionForInterrupteeNew() { return STRUCT_OFFSET(UInterruptionDefinition, _animationMontageToPlayOnInterruptionForInterrupteeNew); } \
	FORCEINLINE static uint32 __PPO___pickUpOnInterrupt() { return STRUCT_OFFSET(UInterruptionDefinition, _pickUpOnInterrupt); } \
	FORCEINLINE static uint32 __PPO___canInterruptWhileCarrying() { return STRUCT_OFFSET(UInterruptionDefinition, _canInterruptWhileCarrying); } \
	FORCEINLINE static uint32 __PPO___useMontageFollower() { return STRUCT_OFFSET(UInterruptionDefinition, _useMontageFollower); } \
	FORCEINLINE static uint32 __PPO___maxHeightDeltaBetweenCharacters() { return STRUCT_OFFSET(UInterruptionDefinition, _maxHeightDeltaBetweenCharacters); } \
	FORCEINLINE static uint32 __PPO___interruptionScoreEvent() { return STRUCT_OFFSET(UInterruptionDefinition, _interruptionScoreEvent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UInterruptionDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_InterruptionDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
