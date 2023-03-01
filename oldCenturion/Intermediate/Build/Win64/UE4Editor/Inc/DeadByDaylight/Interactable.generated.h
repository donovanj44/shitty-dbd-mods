// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class ADBDPlayer;
struct FVector;
class UInteractionDefinition;
class UInteractor;
enum class EInputInteractionType : uint8;
class UInterruptionDefinition;
#ifdef DEADBYDAYLIGHT_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define DEADBYDAYLIGHT_Interactable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_RPC_WRAPPERS \
	virtual FVector GetFocalPointPosition_Implementation(const ADBDPlayer* player, const UInteractionDefinition* definition) const; \
	virtual bool IsInteractionDone_Implementation(ADBDPlayer* player, const UInteractor* interactor, const UInteractionDefinition* definition, EInputInteractionType interactionType) const; \
	virtual bool IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractor* interactor, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const; \
 \
	DECLARE_FUNCTION(execAttachEveryInteractionToZone); \
	DECLARE_FUNCTION(execAuthority_GetInteractingPlayers); \
	DECLARE_FUNCTION(execAuthorityRequestCancelOngoingInteractions); \
	DECLARE_FUNCTION(execGetFocalPointPosition); \
	DECLARE_FUNCTION(execGetInteractingPlayersRaw); \
	DECLARE_FUNCTION(execGetInteractors); \
	DECLARE_FUNCTION(execGetPlayerOwner); \
	DECLARE_FUNCTION(execHasAnOngoingInteraction); \
	DECLARE_FUNCTION(execIsInteractingWith); \
	DECLARE_FUNCTION(execIsInteractionDone); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execOnInteractorLockChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay_Native); \
	DECLARE_FUNCTION(execSetInteractorsUsable); \
	DECLARE_FUNCTION(execSetSingleZone);


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetFocalPointPosition_Implementation(const ADBDPlayer* player, const UInteractionDefinition* definition) const; \
	virtual bool IsInteractionDone_Implementation(ADBDPlayer* player, const UInteractor* interactor, const UInteractionDefinition* definition, EInputInteractionType interactionType) const; \
	virtual bool IsInterruptionPossible_Implementation(const ADBDPlayer* interruptor, const ADBDPlayer* interruptee, const UInteractor* interactor, const UInteractionDefinition* definition, const UInterruptionDefinition* interruption) const; \
 \
	DECLARE_FUNCTION(execAttachEveryInteractionToZone); \
	DECLARE_FUNCTION(execAuthority_GetInteractingPlayers); \
	DECLARE_FUNCTION(execAuthorityRequestCancelOngoingInteractions); \
	DECLARE_FUNCTION(execGetFocalPointPosition); \
	DECLARE_FUNCTION(execGetInteractingPlayersRaw); \
	DECLARE_FUNCTION(execGetInteractors); \
	DECLARE_FUNCTION(execGetPlayerOwner); \
	DECLARE_FUNCTION(execHasAnOngoingInteraction); \
	DECLARE_FUNCTION(execIsInteractingWith); \
	DECLARE_FUNCTION(execIsInteractionDone); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execOnInteractorLockChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay_Native); \
	DECLARE_FUNCTION(execSetInteractorsUsable); \
	DECLARE_FUNCTION(execSetSingleZone);


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_EVENT_PARMS \
	struct Interactable_eventGetFocalPointPosition_Parms \
	{ \
		const ADBDPlayer* player; \
		const UInteractionDefinition* definition; \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventGetFocalPointPosition_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct Interactable_eventIsInteractionDone_Parms \
	{ \
		ADBDPlayer* player; \
		const UInteractor* interactor; \
		const UInteractionDefinition* definition; \
		EInputInteractionType interactionType; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventIsInteractionDone_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Interactable_eventIsInterruptionPossible_Parms \
	{ \
		const ADBDPlayer* interruptor; \
		const ADBDPlayer* interruptee; \
		const UInteractor* interactor; \
		const UInteractionDefinition* definition; \
		const UInterruptionDefinition* interruption; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Interactable_eventIsInterruptionPossible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Interactable_eventPreInterruptionEvent_Parms \
	{ \
		ADBDPlayer* interruptor; \
		ADBDPlayer* interruptee; \
		UInterruptionDefinition* interruption; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAInteractable(); \
	friend struct Z_Construct_UClass_AInteractable_Statics; \
public: \
	DECLARE_CLASS(AInteractable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractable(AInteractable&&); \
	NO_API AInteractable(const AInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___singleZone() { return STRUCT_OFFSET(AInteractable, _singleZone); } \
	FORCEINLINE static uint32 __PPO___useSingleZone() { return STRUCT_OFFSET(AInteractable, _useSingleZone); } \
	FORCEINLINE static uint32 __PPO___interactors() { return STRUCT_OFFSET(AInteractable, _interactors); } \
	FORCEINLINE static uint32 __PPO___transformOptimizer() { return STRUCT_OFFSET(AInteractable, _transformOptimizer); } \
	FORCEINLINE static uint32 __PPO___zoneToInteractions() { return STRUCT_OFFSET(AInteractable, _zoneToInteractions); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_16_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
