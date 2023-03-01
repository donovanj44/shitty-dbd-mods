// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class UInteractor;
class AActor;
class UPrimitiveComponent;
class ACamperPlayer;
enum class ECamperDamageState : uint8;
class UInteractionDefinition;
#ifdef DEADBYDAYLIGHT_Locker_generated_h
#error "Locker.generated.h already included, missing '#pragma once' in Locker.h"
#endif
#define DEADBYDAYLIGHT_Locker_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_21_DELEGATE \
struct _Script_DeadByDaylight_eventLockerOnSurvivorInLockerChanged_Parms \
{ \
	ADBDPlayer* oldSurvivor; \
	ADBDPlayer* newSurvivor; \
}; \
static inline void FLockerOnSurvivorInLockerChanged_DelegateWrapper(const FMulticastScriptDelegate& LockerOnSurvivorInLockerChanged, ADBDPlayer* oldSurvivor, ADBDPlayer* newSurvivor) \
{ \
	_Script_DeadByDaylight_eventLockerOnSurvivorInLockerChanged_Parms Parms; \
	Parms.oldSurvivor=oldSurvivor; \
	Parms.newSurvivor=newSurvivor; \
	LockerOnSurvivorInLockerChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_RPC_WRAPPERS \
	virtual UPrimitiveComponent* GetStunZone_Implementation() const; \
	virtual bool Multicast_EjectSurvivor_Validate(); \
	virtual void Multicast_EjectSurvivor_Implementation(); \
 \
	DECLARE_FUNCTION(execAreInteractionsAllowed); \
	DECLARE_FUNCTION(execAuthority_EnableOtherInteractors); \
	DECLARE_FUNCTION(execAuthority_ReportOpenLockerNoiseEventToAI); \
	DECLARE_FUNCTION(execGetInteractor); \
	DECLARE_FUNCTION(execGetKillerInteractionActor); \
	DECLARE_FUNCTION(execGetStunZone); \
	DECLARE_FUNCTION(execGetSurvivorInLocker); \
	DECLARE_FUNCTION(execIsFacingLocker); \
	DECLARE_FUNCTION(execIsOccupied); \
	DECLARE_FUNCTION(execMulticast_EjectSurvivor); \
	DECLARE_FUNCTION(execOnRep_PreventAllInteractions); \
	DECLARE_FUNCTION(execOnSurvivorEndPlay); \
	DECLARE_FUNCTION(execOnSurvivorHealthChanged); \
	DECLARE_FUNCTION(execSetPlayerOpeningLocker); \
	DECLARE_FUNCTION(execSetSurvivorInLocker); \
	DECLARE_FUNCTION(execSetupKillerSpecificInteraction); \
	DECLARE_FUNCTION(execSpawnKillerReloadActor);


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UPrimitiveComponent* GetStunZone_Implementation() const; \
	virtual bool Multicast_EjectSurvivor_Validate(); \
	virtual void Multicast_EjectSurvivor_Implementation(); \
 \
	DECLARE_FUNCTION(execAreInteractionsAllowed); \
	DECLARE_FUNCTION(execAuthority_EnableOtherInteractors); \
	DECLARE_FUNCTION(execAuthority_ReportOpenLockerNoiseEventToAI); \
	DECLARE_FUNCTION(execGetInteractor); \
	DECLARE_FUNCTION(execGetKillerInteractionActor); \
	DECLARE_FUNCTION(execGetStunZone); \
	DECLARE_FUNCTION(execGetSurvivorInLocker); \
	DECLARE_FUNCTION(execIsFacingLocker); \
	DECLARE_FUNCTION(execIsOccupied); \
	DECLARE_FUNCTION(execMulticast_EjectSurvivor); \
	DECLARE_FUNCTION(execOnRep_PreventAllInteractions); \
	DECLARE_FUNCTION(execOnSurvivorEndPlay); \
	DECLARE_FUNCTION(execOnSurvivorHealthChanged); \
	DECLARE_FUNCTION(execSetPlayerOpeningLocker); \
	DECLARE_FUNCTION(execSetSurvivorInLocker); \
	DECLARE_FUNCTION(execSetupKillerSpecificInteraction); \
	DECLARE_FUNCTION(execSpawnKillerReloadActor);


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_EVENT_PARMS \
	struct Locker_eventGetStunZone_Parms \
	{ \
		UPrimitiveComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Locker_eventGetStunZone_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct Locker_eventStopMinNearOutlineDistLerp_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALocker(); \
	friend struct Z_Construct_UClass_ALocker_Statics; \
public: \
	DECLARE_CLASS(ALocker, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALocker) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_preventAllInteractions=NETFIELD_REP_START, \
		NETFIELD_REP_END=_preventAllInteractions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_INCLASS \
private: \
	static void StaticRegisterNativesALocker(); \
	friend struct Z_Construct_UClass_ALocker_Statics; \
public: \
	DECLARE_CLASS(ALocker, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ALocker) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_preventAllInteractions=NETFIELD_REP_START, \
		NETFIELD_REP_END=_preventAllInteractions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALocker(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALocker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALocker(ALocker&&); \
	NO_API ALocker(const ALocker&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALocker(ALocker&&); \
	NO_API ALocker(const ALocker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocker); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocker); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALocker)


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___montageFollower() { return STRUCT_OFFSET(ALocker, _montageFollower); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(ALocker, _montagePlayer); } \
	FORCEINLINE static uint32 __PPO___playerOpeningLocker() { return STRUCT_OFFSET(ALocker, _playerOpeningLocker); } \
	FORCEINLINE static uint32 __PPO___survivorInLocker() { return STRUCT_OFFSET(ALocker, _survivorInLocker); } \
	FORCEINLINE static uint32 __PPO___mainInteractor() { return STRUCT_OFFSET(ALocker, _mainInteractor); } \
	FORCEINLINE static uint32 __PPO___frontInteractionZone() { return STRUCT_OFFSET(ALocker, _frontInteractionZone); } \
	FORCEINLINE static uint32 __PPO___searchEmpty() { return STRUCT_OFFSET(ALocker, _searchEmpty); } \
	FORCEINLINE static uint32 __PPO___searchPlayer() { return STRUCT_OFFSET(ALocker, _searchPlayer); } \
	FORCEINLINE static uint32 __PPO___killerInteractionActor() { return STRUCT_OFFSET(ALocker, _killerInteractionActor); } \
	FORCEINLINE static uint32 __PPO___lockerAnimInstance() { return STRUCT_OFFSET(ALocker, _lockerAnimInstance); } \
	FORCEINLINE static uint32 __PPO___interactionExitClosetSemantics() { return STRUCT_OFFSET(ALocker, _interactionExitClosetSemantics); } \
	FORCEINLINE static uint32 __PPO___preventAllInteractions() { return STRUCT_OFFSET(ALocker, _preventAllInteractions); } \
	FORCEINLINE static uint32 __PPO___preventAllInteractionsLocally() { return STRUCT_OFFSET(ALocker, _preventAllInteractionsLocally); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_23_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Locker_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ALocker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Locker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
