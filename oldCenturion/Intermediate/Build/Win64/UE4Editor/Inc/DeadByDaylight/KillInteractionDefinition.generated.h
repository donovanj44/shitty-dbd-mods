// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnimationMontageDescriptor;
class ACamperPlayer;
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_KillInteractionDefinition_generated_h
#error "KillInteractionDefinition.generated.h already included, missing '#pragma once' in KillInteractionDefinition.h"
#endif
#define DEADBYDAYLIGHT_KillInteractionDefinition_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_RPC_WRAPPERS \
	virtual FAnimationMontageDescriptor GetExitAnimationMontage_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetChargeCompleted); \
	DECLARE_FUNCTION(execGetExitAnimationMontage); \
	DECLARE_FUNCTION(execGetOwningSurvivor);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FAnimationMontageDescriptor GetExitAnimationMontage_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetChargeCompleted); \
	DECLARE_FUNCTION(execGetExitAnimationMontage); \
	DECLARE_FUNCTION(execGetOwningSurvivor);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_EVENT_PARMS \
	struct KillInteractionDefinition_eventGetExitAnimationMontage_Parms \
	{ \
		FAnimationMontageDescriptor ReturnValue; \
	}; \
	struct KillInteractionDefinition_eventOnKillAudioActivation_Parms \
	{ \
		bool active; \
		ADBDPlayer* interactingPlayer; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKillInteractionDefinition(); \
	friend struct Z_Construct_UClass_UKillInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UKillInteractionDefinition, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillInteractionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUKillInteractionDefinition(); \
	friend struct Z_Construct_UClass_UKillInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UKillInteractionDefinition, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillInteractionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKillInteractionDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillInteractionDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillInteractionDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillInteractionDefinition(UKillInteractionDefinition&&); \
	NO_API UKillInteractionDefinition(const UKillInteractionDefinition&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillInteractionDefinition(UKillInteractionDefinition&&); \
	NO_API UKillInteractionDefinition(const UKillInteractionDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillInteractionDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKillInteractionDefinition)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___disableFOVSystemDuringInteraction() { return STRUCT_OFFSET(UKillInteractionDefinition, _disableFOVSystemDuringInteraction); } \
	FORCEINLINE static uint32 __PPO___nonOverrideableTargetInteractions() { return STRUCT_OFFSET(UKillInteractionDefinition, _nonOverrideableTargetInteractions); } \
	FORCEINLINE static uint32 __PPO___chargeCompleted() { return STRUCT_OFFSET(UKillInteractionDefinition, _chargeCompleted); } \
	FORCEINLINE static uint32 __PPO___isKillShownInThirdPerson() { return STRUCT_OFFSET(UKillInteractionDefinition, _isKillShownInThirdPerson); } \
	FORCEINLINE static uint32 __PPO___manuallyManageMeshHiding() { return STRUCT_OFFSET(UKillInteractionDefinition, _manuallyManageMeshHiding); } \
	FORCEINLINE static uint32 __PPO___exitMontage() { return STRUCT_OFFSET(UKillInteractionDefinition, _exitMontage); }


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UKillInteractionDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_KillInteractionDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
