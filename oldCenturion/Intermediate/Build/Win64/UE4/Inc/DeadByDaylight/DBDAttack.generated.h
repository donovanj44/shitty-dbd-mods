// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAttackSubstateRequestResult;
class ADBDPlayer;
class UAttackableComponent;
enum class EAttackSubstate : uint8;
#ifdef DEADBYDAYLIGHT_DBDAttack_generated_h
#error "DBDAttack.generated.h already included, missing '#pragma once' in DBDAttack.h"
#endif
#define DEADBYDAYLIGHT_DBDAttack_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_RPC_WRAPPERS \
	virtual void Client_ReceiveAttackSubstateRequestResult_Implementation(const FAttackSubstateRequestResult result); \
	virtual void Client_ReceiveHitResult_Implementation(ADBDPlayer* target, bool isValid); \
	virtual void Multicast_ClearTargets_Implementation(); \
	virtual bool Multicast_HitAttackableComponent_Validate(UAttackableComponent* ); \
	virtual void Multicast_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent); \
	virtual void Multicast_HitTarget_Implementation(ADBDPlayer* target); \
	virtual void Multicast_RequestStateChange_Implementation(const EAttackSubstate state); \
	virtual bool Server_ClearTargets_Validate(); \
	virtual void Server_ClearTargets_Implementation(); \
	virtual bool Server_HitAttackableComponent_Validate(UAttackableComponent* ); \
	virtual void Server_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent); \
	virtual bool Server_HitTarget_Validate(ADBDPlayer* , const float ); \
	virtual void Server_HitTarget_Implementation(ADBDPlayer* target, const float targetLocationTimestamp); \
	virtual bool Server_RequestStateChange_Validate(const EAttackSubstate ); \
	virtual void Server_RequestStateChange_Implementation(const EAttackSubstate state); \
 \
	DECLARE_FUNCTION(execClient_ReceiveAttackSubstateRequestResult); \
	DECLARE_FUNCTION(execClient_ReceiveHitResult); \
	DECLARE_FUNCTION(execMulticast_ClearTargets); \
	DECLARE_FUNCTION(execMulticast_HitAttackableComponent); \
	DECLARE_FUNCTION(execMulticast_HitTarget); \
	DECLARE_FUNCTION(execMulticast_RequestStateChange); \
	DECLARE_FUNCTION(execServer_ClearTargets); \
	DECLARE_FUNCTION(execServer_HitAttackableComponent); \
	DECLARE_FUNCTION(execServer_HitTarget); \
	DECLARE_FUNCTION(execServer_RequestStateChange);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_ReceiveAttackSubstateRequestResult_Implementation(const FAttackSubstateRequestResult result); \
	virtual void Client_ReceiveHitResult_Implementation(ADBDPlayer* target, bool isValid); \
	virtual void Multicast_ClearTargets_Implementation(); \
	virtual bool Multicast_HitAttackableComponent_Validate(UAttackableComponent* ); \
	virtual void Multicast_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent); \
	virtual void Multicast_HitTarget_Implementation(ADBDPlayer* target); \
	virtual void Multicast_RequestStateChange_Implementation(const EAttackSubstate state); \
	virtual bool Server_ClearTargets_Validate(); \
	virtual void Server_ClearTargets_Implementation(); \
	virtual bool Server_HitAttackableComponent_Validate(UAttackableComponent* ); \
	virtual void Server_HitAttackableComponent_Implementation(UAttackableComponent* attackableComponent); \
	virtual bool Server_HitTarget_Validate(ADBDPlayer* , const float ); \
	virtual void Server_HitTarget_Implementation(ADBDPlayer* target, const float targetLocationTimestamp); \
	virtual bool Server_RequestStateChange_Validate(const EAttackSubstate ); \
	virtual void Server_RequestStateChange_Implementation(const EAttackSubstate state); \
 \
	DECLARE_FUNCTION(execClient_ReceiveAttackSubstateRequestResult); \
	DECLARE_FUNCTION(execClient_ReceiveHitResult); \
	DECLARE_FUNCTION(execMulticast_ClearTargets); \
	DECLARE_FUNCTION(execMulticast_HitAttackableComponent); \
	DECLARE_FUNCTION(execMulticast_HitTarget); \
	DECLARE_FUNCTION(execMulticast_RequestStateChange); \
	DECLARE_FUNCTION(execServer_ClearTargets); \
	DECLARE_FUNCTION(execServer_HitAttackableComponent); \
	DECLARE_FUNCTION(execServer_HitTarget); \
	DECLARE_FUNCTION(execServer_RequestStateChange);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_EVENT_PARMS \
	struct DBDAttack_eventClient_ReceiveAttackSubstateRequestResult_Parms \
	{ \
		FAttackSubstateRequestResult result; \
	}; \
	struct DBDAttack_eventClient_ReceiveHitResult_Parms \
	{ \
		ADBDPlayer* target; \
		bool isValid; \
	}; \
	struct DBDAttack_eventMulticast_HitAttackableComponent_Parms \
	{ \
		UAttackableComponent* attackableComponent; \
	}; \
	struct DBDAttack_eventMulticast_HitTarget_Parms \
	{ \
		ADBDPlayer* target; \
	}; \
	struct DBDAttack_eventMulticast_RequestStateChange_Parms \
	{ \
		EAttackSubstate state; \
	}; \
	struct DBDAttack_eventServer_HitAttackableComponent_Parms \
	{ \
		UAttackableComponent* attackableComponent; \
	}; \
	struct DBDAttack_eventServer_HitTarget_Parms \
	{ \
		ADBDPlayer* target; \
		float targetLocationTimestamp; \
	}; \
	struct DBDAttack_eventServer_RequestStateChange_Parms \
	{ \
		EAttackSubstate state; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDAttack(); \
	friend struct Z_Construct_UClass_UDBDAttack_Statics; \
public: \
	DECLARE_CLASS(UDBDAttack, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAttack)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDBDAttack(); \
	friend struct Z_Construct_UClass_UDBDAttack_Statics; \
public: \
	DECLARE_CLASS(UDBDAttack, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAttack)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDAttack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDAttack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAttack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAttack(UDBDAttack&&); \
	NO_API UDBDAttack(const UDBDAttack&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAttack(UDBDAttack&&); \
	NO_API UDBDAttack(const UDBDAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAttack); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDAttack)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___attackType() { return STRUCT_OFFSET(UDBDAttack, _attackType); } \
	FORCEINLINE static uint32 __PPO___useMontage() { return STRUCT_OFFSET(UDBDAttack, _useMontage); } \
	FORCEINLINE static uint32 __PPO___damageZone() { return STRUCT_OFFSET(UDBDAttack, _damageZone); } \
	FORCEINLINE static uint32 __PPO___lockZone() { return STRUCT_OFFSET(UDBDAttack, _lockZone); } \
	FORCEINLINE static uint32 __PPO___obstructionZone() { return STRUCT_OFFSET(UDBDAttack, _obstructionZone); } \
	FORCEINLINE static uint32 __PPO___maxAccelerationMultiplier() { return STRUCT_OFFSET(UDBDAttack, _maxAccelerationMultiplier); } \
	FORCEINLINE static uint32 __PPO___targetTracker() { return STRUCT_OFFSET(UDBDAttack, _targetTracker); } \
	FORCEINLINE static uint32 __PPO___stateClasses() { return STRUCT_OFFSET(UDBDAttack, _stateClasses); } \
	FORCEINLINE static uint32 __PPO___localAlreadyHitTargets() { return STRUCT_OFFSET(UDBDAttack, _localAlreadyHitTargets); } \
	FORCEINLINE static uint32 __PPO___states() { return STRUCT_OFFSET(UDBDAttack, _states); } \
	FORCEINLINE static uint32 __PPO___hitTargets() { return STRUCT_OFFSET(UDBDAttack, _hitTargets); } \
	FORCEINLINE static uint32 __PPO___targetsAwaitingServerValidation() { return STRUCT_OFFSET(UDBDAttack, _targetsAwaitingServerValidation); } \
	FORCEINLINE static uint32 __PPO___hitValidationConfigName() { return STRUCT_OFFSET(UDBDAttack, _hitValidationConfigName); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_19_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
