// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAttackType : uint8;
#ifdef DEADBYDAYLIGHT_DBDAttackerComponent_generated_h
#error "DBDAttackerComponent.generated.h already included, missing '#pragma once' in DBDAttackerComponent.h"
#endif
#define DEADBYDAYLIGHT_DBDAttackerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventDBDAttackerComponentOnAttackFinishDelegate_Parms \
{ \
	EAttackType attackType; \
}; \
static inline void FDBDAttackerComponentOnAttackFinishDelegate_DelegateWrapper(const FMulticastScriptDelegate& DBDAttackerComponentOnAttackFinishDelegate, const EAttackType attackType) \
{ \
	_Script_DeadByDaylight_eventDBDAttackerComponentOnAttackFinishDelegate_Parms Parms; \
	Parms.attackType=attackType; \
	DBDAttackerComponentOnAttackFinishDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventDBDAttackerComponentOnAttackStartDelegate_Parms \
{ \
	EAttackType attackType; \
}; \
static inline void FDBDAttackerComponentOnAttackStartDelegate_DelegateWrapper(const FMulticastScriptDelegate& DBDAttackerComponentOnAttackStartDelegate, const EAttackType attackType) \
{ \
	_Script_DeadByDaylight_eventDBDAttackerComponentOnAttackStartDelegate_Parms Parms; \
	Parms.attackType=attackType; \
	DBDAttackerComponentOnAttackStartDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_RPC_WRAPPERS \
	virtual void Multicast_StoreAttack_Implementation(const EAttackType attackType); \
	virtual bool Server_StoreAttack_Validate(const EAttackType ); \
	virtual void Server_StoreAttack_Implementation(const EAttackType attackType); \
 \
	DECLARE_FUNCTION(execIsAnyAttackTransitionRequested); \
	DECLARE_FUNCTION(execIsAttacking); \
	DECLARE_FUNCTION(execIsAttackTransitionRequested); \
	DECLARE_FUNCTION(execLocal_RequestAttack); \
	DECLARE_FUNCTION(execMulticast_StoreAttack); \
	DECLARE_FUNCTION(execServer_StoreAttack);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_StoreAttack_Implementation(const EAttackType attackType); \
	virtual bool Server_StoreAttack_Validate(const EAttackType ); \
	virtual void Server_StoreAttack_Implementation(const EAttackType attackType); \
 \
	DECLARE_FUNCTION(execIsAnyAttackTransitionRequested); \
	DECLARE_FUNCTION(execIsAttacking); \
	DECLARE_FUNCTION(execIsAttackTransitionRequested); \
	DECLARE_FUNCTION(execLocal_RequestAttack); \
	DECLARE_FUNCTION(execMulticast_StoreAttack); \
	DECLARE_FUNCTION(execServer_StoreAttack);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_EVENT_PARMS \
	struct DBDAttackerComponent_eventMulticast_StoreAttack_Parms \
	{ \
		EAttackType attackType; \
	}; \
	struct DBDAttackerComponent_eventServer_StoreAttack_Parms \
	{ \
		EAttackType attackType; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDAttackerComponent(); \
	friend struct Z_Construct_UClass_UDBDAttackerComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDAttackerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAttackerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDBDAttackerComponent(); \
	friend struct Z_Construct_UClass_UDBDAttackerComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDAttackerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAttackerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDAttackerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDAttackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAttackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAttackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAttackerComponent(UDBDAttackerComponent&&); \
	NO_API UDBDAttackerComponent(const UDBDAttackerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAttackerComponent(UDBDAttackerComponent&&); \
	NO_API UDBDAttackerComponent(const UDBDAttackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAttackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAttackerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDAttackerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___attacks() { return STRUCT_OFFSET(UDBDAttackerComponent, _attacks); } \
	FORCEINLINE static uint32 __PPO___requestedAttack() { return STRUCT_OFFSET(UDBDAttackerComponent, _requestedAttack); } \
	FORCEINLINE static uint32 __PPO___currentAttack() { return STRUCT_OFFSET(UDBDAttackerComponent, _currentAttack); } \
	FORCEINLINE static uint32 __PPO___attackHitDelegates() { return STRUCT_OFFSET(UDBDAttackerComponent, _attackHitDelegates); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_13_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDAttackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAttackerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
