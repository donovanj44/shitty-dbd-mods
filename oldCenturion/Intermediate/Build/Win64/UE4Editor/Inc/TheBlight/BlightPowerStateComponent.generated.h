// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
struct FVector;
class UBlightPowerState;
enum class EWallGrabState : uint8;
class UTimerObject;
#ifdef THEBLIGHT_BlightPowerStateComponent_generated_h
#error "BlightPowerStateComponent.generated.h already included, missing '#pragma once' in BlightPowerStateComponent.h"
#endif
#define THEBLIGHT_BlightPowerStateComponent_generated_h

#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_17_DELEGATE \
struct _Script_TheBlight_eventBlightPowerStateComponentOnPowerCollided_Parms \
{ \
	ADBDPlayer* collidingPlayer; \
	FVector collisionLocation; \
	FVector collisionNormal; \
}; \
static inline void FBlightPowerStateComponentOnPowerCollided_DelegateWrapper(const FMulticastScriptDelegate& BlightPowerStateComponentOnPowerCollided, ADBDPlayer* collidingPlayer, FVector collisionLocation, FVector collisionNormal) \
{ \
	_Script_TheBlight_eventBlightPowerStateComponentOnPowerCollided_Parms Parms; \
	Parms.collidingPlayer=collidingPlayer; \
	Parms.collisionLocation=collisionLocation; \
	Parms.collisionNormal=collisionNormal; \
	BlightPowerStateComponentOnPowerCollided.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_SPARSE_DATA
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_RPC_WRAPPERS \
	virtual bool Multicast_SetWallGrabState_Validate(const EWallGrabState ); \
	virtual void Multicast_SetWallGrabState_Implementation(const EWallGrabState newState); \
	virtual bool Server_SetWallGrabState_Validate(const EWallGrabState ); \
	virtual void Server_SetWallGrabState_Implementation(const EWallGrabState newState); \
 \
	DECLARE_FUNCTION(execCanDash); \
	DECLARE_FUNCTION(execGetCurrentPowerState); \
	DECLARE_FUNCTION(execGetDashTokensRemaining); \
	DECLARE_FUNCTION(execGetLookAngleDegrees); \
	DECLARE_FUNCTION(execGetPowerState); \
	DECLARE_FUNCTION(execGetPowerStateByEnum); \
	DECLARE_FUNCTION(execGetStateTimeElapsed); \
	DECLARE_FUNCTION(execGetStateTimer); \
	DECLARE_FUNCTION(execGetStateTimeRemaining); \
	DECLARE_FUNCTION(execMulticast_SetWallGrabState); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_DashTokens); \
	DECLARE_FUNCTION(execOnRep_StateTimer); \
	DECLARE_FUNCTION(execResetDashTokens); \
	DECLARE_FUNCTION(execServer_SetWallGrabState);


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_SetWallGrabState_Validate(const EWallGrabState ); \
	virtual void Multicast_SetWallGrabState_Implementation(const EWallGrabState newState); \
	virtual bool Server_SetWallGrabState_Validate(const EWallGrabState ); \
	virtual void Server_SetWallGrabState_Implementation(const EWallGrabState newState); \
 \
	DECLARE_FUNCTION(execCanDash); \
	DECLARE_FUNCTION(execGetCurrentPowerState); \
	DECLARE_FUNCTION(execGetDashTokensRemaining); \
	DECLARE_FUNCTION(execGetLookAngleDegrees); \
	DECLARE_FUNCTION(execGetPowerState); \
	DECLARE_FUNCTION(execGetPowerStateByEnum); \
	DECLARE_FUNCTION(execGetStateTimeElapsed); \
	DECLARE_FUNCTION(execGetStateTimer); \
	DECLARE_FUNCTION(execGetStateTimeRemaining); \
	DECLARE_FUNCTION(execMulticast_SetWallGrabState); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_DashTokens); \
	DECLARE_FUNCTION(execOnRep_StateTimer); \
	DECLARE_FUNCTION(execResetDashTokens); \
	DECLARE_FUNCTION(execServer_SetWallGrabState);


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_EVENT_PARMS \
	struct BlightPowerStateComponent_eventMulticast_SetWallGrabState_Parms \
	{ \
		EWallGrabState newState; \
	}; \
	struct BlightPowerStateComponent_eventServer_SetWallGrabState_Parms \
	{ \
		EWallGrabState newState; \
	};


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlightPowerStateComponent(); \
	friend struct Z_Construct_UClass_UBlightPowerStateComponent_Statics; \
public: \
	DECLARE_CLASS(UBlightPowerStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UBlightPowerStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBlightPowerStateComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_stateTimer=NETFIELD_REP_START, \
		_dashTokens, \
		NETFIELD_REP_END=_dashTokens	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBlightPowerStateComponent(); \
	friend struct Z_Construct_UClass_UBlightPowerStateComponent_Statics; \
public: \
	DECLARE_CLASS(UBlightPowerStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheBlight"), NO_API) \
	DECLARE_SERIALIZER(UBlightPowerStateComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBlightPowerStateComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_stateTimer=NETFIELD_REP_START, \
		_dashTokens, \
		NETFIELD_REP_END=_dashTokens	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlightPowerStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlightPowerStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightPowerStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightPowerStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightPowerStateComponent(UBlightPowerStateComponent&&); \
	NO_API UBlightPowerStateComponent(const UBlightPowerStateComponent&); \
public:


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlightPowerStateComponent(UBlightPowerStateComponent&&); \
	NO_API UBlightPowerStateComponent(const UBlightPowerStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlightPowerStateComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlightPowerStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlightPowerStateComponent)


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___blightPowerStateClasses() { return STRUCT_OFFSET(UBlightPowerStateComponent, _blightPowerStateClasses); } \
	FORCEINLINE static uint32 __PPO___canDashCheckCollisionRadius() { return STRUCT_OFFSET(UBlightPowerStateComponent, _canDashCheckCollisionRadius); } \
	FORCEINLINE static uint32 __PPO___canDashCheckCollisionHeight() { return STRUCT_OFFSET(UBlightPowerStateComponent, _canDashCheckCollisionHeight); } \
	FORCEINLINE static uint32 __PPO___canDashCheckCollisionRange() { return STRUCT_OFFSET(UBlightPowerStateComponent, _canDashCheckCollisionRange); } \
	FORCEINLINE static uint32 __PPO___blightLethalDashDodgeRadius() { return STRUCT_OFFSET(UBlightPowerStateComponent, _blightLethalDashDodgeRadius); } \
	FORCEINLINE static uint32 __PPO___powerInteractionDefinition() { return STRUCT_OFFSET(UBlightPowerStateComponent, _powerInteractionDefinition); } \
	FORCEINLINE static uint32 __PPO___stateTimer() { return STRUCT_OFFSET(UBlightPowerStateComponent, _stateTimer); } \
	FORCEINLINE static uint32 __PPO___blightPowerStates() { return STRUCT_OFFSET(UBlightPowerStateComponent, _blightPowerStates); } \
	FORCEINLINE static uint32 __PPO___currentBlightPowerState() { return STRUCT_OFFSET(UBlightPowerStateComponent, _currentBlightPowerState); } \
	FORCEINLINE static uint32 __PPO___dashTokens() { return STRUCT_OFFSET(UBlightPowerStateComponent, _dashTokens); } \
	FORCEINLINE static uint32 __PPO___maximumDashTokens() { return STRUCT_OFFSET(UBlightPowerStateComponent, _maximumDashTokens); } \
	FORCEINLINE static uint32 __PPO___tokenChargeRate() { return STRUCT_OFFSET(UBlightPowerStateComponent, _tokenChargeRate); }


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_19_PROLOG \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_EVENT_PARMS


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_INCLASS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_SPARSE_DATA \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEBLIGHT_API UClass* StaticClass<class UBlightPowerStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheBlight_Public_BlightPowerStateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
