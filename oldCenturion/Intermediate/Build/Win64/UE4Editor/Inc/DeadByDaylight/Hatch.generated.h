// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EHatchState : uint8;
struct FGameplayTag;
struct FGameEventData;
class UAnimationMontageSlave;
class USceneComponent;
#ifdef DEADBYDAYLIGHT_Hatch_generated_h
#error "Hatch.generated.h already included, missing '#pragma once' in Hatch.h"
#endif
#define DEADBYDAYLIGHT_Hatch_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_CheckedChangeActiveState); \
	DECLARE_FUNCTION(execAuthority_CheckedCloseHatch); \
	DECLARE_FUNCTION(execAuthority_CheckedOpenForceClosedHatch); \
	DECLARE_FUNCTION(execAuthority_CheckedOpenHatch); \
	DECLARE_FUNCTION(execAuthority_OnCloseTimerComplete); \
	DECLARE_FUNCTION(execAuthority_SetHatchState); \
	DECLARE_FUNCTION(execAuthority_SetIsForceOpen); \
	DECLARE_FUNCTION(execGetHatchState); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsSurvivorEscaping); \
	DECLARE_FUNCTION(execLocal_SetHatchState); \
	DECLARE_FUNCTION(execOnEndGameOver); \
	DECLARE_FUNCTION(execOnHatchVisibilityChanged); \
	DECLARE_FUNCTION(execOnRep_HatchState); \
	DECLARE_FUNCTION(execOnSurvivorEscaped); \
	DECLARE_FUNCTION(execOnSurvivorEscapeInterrupted); \
	DECLARE_FUNCTION(execOnSurvivorEscaping); \
	DECLARE_FUNCTION(execOnSurvivorsLeftChanged); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execSetForceIsOpen); \
	DECLARE_FUNCTION(execSetIsSurvivorEscaping);


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_CheckedChangeActiveState); \
	DECLARE_FUNCTION(execAuthority_CheckedCloseHatch); \
	DECLARE_FUNCTION(execAuthority_CheckedOpenForceClosedHatch); \
	DECLARE_FUNCTION(execAuthority_CheckedOpenHatch); \
	DECLARE_FUNCTION(execAuthority_OnCloseTimerComplete); \
	DECLARE_FUNCTION(execAuthority_SetHatchState); \
	DECLARE_FUNCTION(execAuthority_SetIsForceOpen); \
	DECLARE_FUNCTION(execGetHatchState); \
	DECLARE_FUNCTION(execIsOpen); \
	DECLARE_FUNCTION(execIsSurvivorEscaping); \
	DECLARE_FUNCTION(execLocal_SetHatchState); \
	DECLARE_FUNCTION(execOnEndGameOver); \
	DECLARE_FUNCTION(execOnHatchVisibilityChanged); \
	DECLARE_FUNCTION(execOnRep_HatchState); \
	DECLARE_FUNCTION(execOnSurvivorEscaped); \
	DECLARE_FUNCTION(execOnSurvivorEscapeInterrupted); \
	DECLARE_FUNCTION(execOnSurvivorEscaping); \
	DECLARE_FUNCTION(execOnSurvivorsLeftChanged); \
	DECLARE_FUNCTION(execResetTimer); \
	DECLARE_FUNCTION(execSetForceIsOpen); \
	DECLARE_FUNCTION(execSetIsSurvivorEscaping);


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_EVENT_PARMS \
	struct Hatch_eventGetAnimationMontageSlave_Parms \
	{ \
		UAnimationMontageSlave* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Hatch_eventGetAnimationMontageSlave_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Hatch_eventGetEscapeFocalPoint_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Hatch_eventGetEscapeFocalPoint_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Hatch_eventGetHatchCenter_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Hatch_eventGetHatchCenter_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Hatch_eventOnHatchStateModified_Parms \
	{ \
		EHatchState oldState; \
		EHatchState newState; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHatch(); \
	friend struct Z_Construct_UClass_AHatch_Statics; \
public: \
	DECLARE_CLASS(AHatch, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AHatch) \
	virtual UObject* _getUObject() const override { return const_cast<AHatch*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAHatch(); \
	friend struct Z_Construct_UClass_AHatch_Statics; \
public: \
	DECLARE_CLASS(AHatch, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AHatch) \
	virtual UObject* _getUObject() const override { return const_cast<AHatch*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_hatchState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_hatchState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHatch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHatch(AHatch&&); \
	NO_API AHatch(const AHatch&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHatch(AHatch&&); \
	NO_API AHatch(const AHatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHatch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHatch)


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___hatchState() { return STRUCT_OFFSET(AHatch, _hatchState); } \
	FORCEINLINE static uint32 __PPO___isSurvivorEscaping() { return STRUCT_OFFSET(AHatch, _isSurvivorEscaping); } \
	FORCEINLINE static uint32 __PPO___isEndGameOver() { return STRUCT_OFFSET(AHatch, _isEndGameOver); } \
	FORCEINLINE static uint32 __PPO___isForceOpen() { return STRUCT_OFFSET(AHatch, _isForceOpen); } \
	FORCEINLINE static uint32 __PPO___attemptToCloseHatchOnNextEscape() { return STRUCT_OFFSET(AHatch, _attemptToCloseHatchOnNextEscape); } \
	FORCEINLINE static uint32 __PPO___baseCollision() { return STRUCT_OFFSET(AHatch, _baseCollision); } \
	FORCEINLINE static uint32 __PPO___hatchOpenDuration() { return STRUCT_OFFSET(AHatch, _hatchOpenDuration); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AHatch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Hatch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
