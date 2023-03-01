// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UInteractionDefinition;
class AInteractable;
class UInterruptionDefinition;
#ifdef DEADBYDAYLIGHT_Interactor_generated_h
#error "Interactor.generated.h already included, missing '#pragma once' in Interactor.h"
#endif
#define DEADBYDAYLIGHT_Interactor_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_RPC_WRAPPERS \
	virtual bool Multicast_LockStatus_Validate(ADBDPlayer* , UInteractionDefinition* , bool ); \
	virtual void Multicast_LockStatus_Implementation(ADBDPlayer* player, UInteractionDefinition* currentInteraction, bool lock); \
	virtual bool Multicast_ReservationStatus_Validate(ADBDPlayer* , bool ); \
	virtual void Multicast_ReservationStatus_Implementation(ADBDPlayer* player, bool lock); \
 \
	DECLARE_FUNCTION(execAuthority_GetInteractingPlayer); \
	DECLARE_FUNCTION(execCanPerformInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractingPlayerRaw); \
	DECLARE_FUNCTION(execGetInteractionDefinitions); \
	DECLARE_FUNCTION(execGetIsUsable); \
	DECLARE_FUNCTION(execIsInteracting); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execMulticast_LockStatus); \
	DECLARE_FUNCTION(execMulticast_ReservationStatus); \
	DECLARE_FUNCTION(execSetIsUsable);


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_LockStatus_Validate(ADBDPlayer* , UInteractionDefinition* , bool ); \
	virtual void Multicast_LockStatus_Implementation(ADBDPlayer* player, UInteractionDefinition* currentInteraction, bool lock); \
	virtual bool Multicast_ReservationStatus_Validate(ADBDPlayer* , bool ); \
	virtual void Multicast_ReservationStatus_Implementation(ADBDPlayer* player, bool lock); \
 \
	DECLARE_FUNCTION(execAuthority_GetInteractingPlayer); \
	DECLARE_FUNCTION(execCanPerformInteraction); \
	DECLARE_FUNCTION(execGetCurrentInteraction); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execGetInteractingPlayerRaw); \
	DECLARE_FUNCTION(execGetInteractionDefinitions); \
	DECLARE_FUNCTION(execGetIsUsable); \
	DECLARE_FUNCTION(execIsInteracting); \
	DECLARE_FUNCTION(execIsInterruptionPossible); \
	DECLARE_FUNCTION(execMulticast_LockStatus); \
	DECLARE_FUNCTION(execMulticast_ReservationStatus); \
	DECLARE_FUNCTION(execSetIsUsable);


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_EVENT_PARMS \
	struct Interactor_eventMulticast_LockStatus_Parms \
	{ \
		ADBDPlayer* player; \
		UInteractionDefinition* currentInteraction; \
		bool lock; \
	}; \
	struct Interactor_eventMulticast_ReservationStatus_Parms \
	{ \
		ADBDPlayer* player; \
		bool lock; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractor(); \
	friend struct Z_Construct_UClass_UInteractor_Statics; \
public: \
	DECLARE_CLASS(UInteractor, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsUsable=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsUsable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInteractor(); \
	friend struct Z_Construct_UClass_UInteractor_Statics; \
public: \
	DECLARE_CLASS(UInteractor, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsUsable=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsUsable	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractor(UInteractor&&); \
	NO_API UInteractor(const UInteractor&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractor(UInteractor&&); \
	NO_API UInteractor(const UInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractor)


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsUsable() { return STRUCT_OFFSET(UInteractor, IsUsable); } \
	FORCEINLINE static uint32 __PPO___lock() { return STRUCT_OFFSET(UInteractor, _lock); } \
	FORCEINLINE static uint32 __PPO___reservation() { return STRUCT_OFFSET(UInteractor, _reservation); } \
	FORCEINLINE static uint32 __PPO___currentInteraction() { return STRUCT_OFFSET(UInteractor, _currentInteraction); } \
	FORCEINLINE static uint32 __PPO___interactionDefinitions() { return STRUCT_OFFSET(UInteractor, _interactionDefinitions); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_12_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Interactor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
