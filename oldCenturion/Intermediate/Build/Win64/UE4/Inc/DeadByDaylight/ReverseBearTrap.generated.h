// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef DEADBYDAYLIGHT_ReverseBearTrap_generated_h
#error "ReverseBearTrap.generated.h already included, missing '#pragma once' in ReverseBearTrap.h"
#endif
#define DEADBYDAYLIGHT_ReverseBearTrap_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_RPC_WRAPPERS \
	virtual int32 GetWarningLevel_Implementation() const; \
	virtual bool ShouldUpdateExecutionTimer_Implementation() const; \
	virtual void StopMontage_Implementation(); \
 \
	DECLARE_FUNCTION(execAttachSurvivor); \
	DECLARE_FUNCTION(execAuthority_SetKeyID); \
	DECLARE_FUNCTION(execCanExecute); \
	DECLARE_FUNCTION(execDetachSurvivor); \
	DECLARE_FUNCTION(execFastForwardExecutionTimer); \
	DECLARE_FUNCTION(execGetAttachedSurvivor); \
	DECLARE_FUNCTION(execGetExecutionTimerPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetExecutionTimerTimeLeft); \
	DECLARE_FUNCTION(execGetExitGatesPoweredAfterAttachment); \
	DECLARE_FUNCTION(execGetGeneratorFixedAfterAttachment); \
	DECLARE_FUNCTION(execGetKeyID); \
	DECLARE_FUNCTION(execGetWarningLevel); \
	DECLARE_FUNCTION(execGetWasGateClosedAtAttachment); \
	DECLARE_FUNCTION(execHasDetachStarted); \
	DECLARE_FUNCTION(execIsExecutionTimerActive); \
	DECLARE_FUNCTION(execIsExecutionTimerDone); \
	DECLARE_FUNCTION(execIsInWarningZone); \
	DECLARE_FUNCTION(execIsRBTActivated); \
	DECLARE_FUNCTION(execNotifyDetachStarted); \
	DECLARE_FUNCTION(execNotifyOnAttachSurvivorBegin); \
	DECLARE_FUNCTION(execOnEnterWarningZone); \
	DECLARE_FUNCTION(execOnExitWarningZone); \
	DECLARE_FUNCTION(execOnGeneratorComplete); \
	DECLARE_FUNCTION(execResetExecutionTimer); \
	DECLARE_FUNCTION(execSetGateClosedAtAttachment); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execShouldUpdateExecutionTimer); \
	DECLARE_FUNCTION(execStopExecutionTimer); \
	DECLARE_FUNCTION(execStopMontage);


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetWarningLevel_Implementation() const; \
	virtual bool ShouldUpdateExecutionTimer_Implementation() const; \
	virtual void StopMontage_Implementation(); \
 \
	DECLARE_FUNCTION(execAttachSurvivor); \
	DECLARE_FUNCTION(execAuthority_SetKeyID); \
	DECLARE_FUNCTION(execCanExecute); \
	DECLARE_FUNCTION(execDetachSurvivor); \
	DECLARE_FUNCTION(execFastForwardExecutionTimer); \
	DECLARE_FUNCTION(execGetAttachedSurvivor); \
	DECLARE_FUNCTION(execGetExecutionTimerPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetExecutionTimerTimeLeft); \
	DECLARE_FUNCTION(execGetExitGatesPoweredAfterAttachment); \
	DECLARE_FUNCTION(execGetGeneratorFixedAfterAttachment); \
	DECLARE_FUNCTION(execGetKeyID); \
	DECLARE_FUNCTION(execGetWarningLevel); \
	DECLARE_FUNCTION(execGetWasGateClosedAtAttachment); \
	DECLARE_FUNCTION(execHasDetachStarted); \
	DECLARE_FUNCTION(execIsExecutionTimerActive); \
	DECLARE_FUNCTION(execIsExecutionTimerDone); \
	DECLARE_FUNCTION(execIsInWarningZone); \
	DECLARE_FUNCTION(execIsRBTActivated); \
	DECLARE_FUNCTION(execNotifyDetachStarted); \
	DECLARE_FUNCTION(execNotifyOnAttachSurvivorBegin); \
	DECLARE_FUNCTION(execOnEnterWarningZone); \
	DECLARE_FUNCTION(execOnExitWarningZone); \
	DECLARE_FUNCTION(execOnGeneratorComplete); \
	DECLARE_FUNCTION(execResetExecutionTimer); \
	DECLARE_FUNCTION(execSetGateClosedAtAttachment); \
	DECLARE_FUNCTION(execSetVisible); \
	DECLARE_FUNCTION(execShouldUpdateExecutionTimer); \
	DECLARE_FUNCTION(execStopExecutionTimer); \
	DECLARE_FUNCTION(execStopMontage);


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_EVENT_PARMS \
	struct ReverseBearTrap_eventGetWarningLevel_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ReverseBearTrap_eventGetWarningLevel_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ReverseBearTrap_eventOnAttachSurvivor_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct ReverseBearTrap_eventOnAttachSurvivorBegin_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct ReverseBearTrap_eventOnDetachSurvivor_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct ReverseBearTrap_eventOnWarningLevelChanged_Parms \
	{ \
		int32 previousWarningLevel; \
		int32 currentWarningLevel; \
	}; \
	struct ReverseBearTrap_eventShouldUpdateExecutionTimer_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ReverseBearTrap_eventShouldUpdateExecutionTimer_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReverseBearTrap(); \
	friend struct Z_Construct_UClass_AReverseBearTrap_Statics; \
public: \
	DECLARE_CLASS(AReverseBearTrap, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AReverseBearTrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_keyID=NETFIELD_REP_START, \
		_exitGatesPoweredAfterAttachment, \
		_generatorFixedAfterAttachment, \
		NETFIELD_REP_END=_generatorFixedAfterAttachment	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAReverseBearTrap(); \
	friend struct Z_Construct_UClass_AReverseBearTrap_Statics; \
public: \
	DECLARE_CLASS(AReverseBearTrap, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AReverseBearTrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_keyID=NETFIELD_REP_START, \
		_exitGatesPoweredAfterAttachment, \
		_generatorFixedAfterAttachment, \
		NETFIELD_REP_END=_generatorFixedAfterAttachment	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReverseBearTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReverseBearTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReverseBearTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReverseBearTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReverseBearTrap(AReverseBearTrap&&); \
	NO_API AReverseBearTrap(const AReverseBearTrap&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReverseBearTrap(AReverseBearTrap&&); \
	NO_API AReverseBearTrap(const AReverseBearTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReverseBearTrap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReverseBearTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReverseBearTrap)


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___rbtMesh() { return STRUCT_OFFSET(AReverseBearTrap, _rbtMesh); } \
	FORCEINLINE static uint32 __PPO___animMontageSlave() { return STRUCT_OFFSET(AReverseBearTrap, _animMontageSlave); } \
	FORCEINLINE static uint32 __PPO___keyID() { return STRUCT_OFFSET(AReverseBearTrap, _keyID); } \
	FORCEINLINE static uint32 __PPO___exitGatesPoweredAfterAttachment() { return STRUCT_OFFSET(AReverseBearTrap, _exitGatesPoweredAfterAttachment); } \
	FORCEINLINE static uint32 __PPO___generatorFixedAfterAttachment() { return STRUCT_OFFSET(AReverseBearTrap, _generatorFixedAfterAttachment); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AReverseBearTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ReverseBearTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
