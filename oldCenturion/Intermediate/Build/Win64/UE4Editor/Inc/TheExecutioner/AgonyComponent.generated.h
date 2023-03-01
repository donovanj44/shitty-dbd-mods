// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
struct FGameplayTag;
struct FGameEventData;
#ifdef THEEXECUTIONER_AgonyComponent_generated_h
#error "AgonyComponent.generated.h already included, missing '#pragma once' in AgonyComponent.h"
#endif
#define THEEXECUTIONER_AgonyComponent_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnAttackTrailDamageCooldownTimerDone); \
	DECLARE_FUNCTION(execAuthority_OnDrainStageChanged); \
	DECLARE_FUNCTION(execIsAgonyMoriable); \
	DECLARE_FUNCTION(execIsInAgony); \
	DECLARE_FUNCTION(execOnHideBarbWireFXOnGameEvent); \
	DECLARE_FUNCTION(execOnRep_IsInAgony); \
	DECLARE_FUNCTION(execOnShowBarbWireFXOnGameEvent);


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnAttackTrailDamageCooldownTimerDone); \
	DECLARE_FUNCTION(execAuthority_OnDrainStageChanged); \
	DECLARE_FUNCTION(execIsAgonyMoriable); \
	DECLARE_FUNCTION(execIsInAgony); \
	DECLARE_FUNCTION(execOnHideBarbWireFXOnGameEvent); \
	DECLARE_FUNCTION(execOnRep_IsInAgony); \
	DECLARE_FUNCTION(execOnShowBarbWireFXOnGameEvent);


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_EVENT_PARMS \
	struct AgonyComponent_eventOnAgonyChanged_Cosmetic_Parms \
	{ \
		bool NewIsInAgony; \
	}; \
	struct AgonyComponent_eventOnLocallyObservedChanged_Parms \
	{ \
		bool isLocallyObserved; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgonyComponent(); \
	friend struct Z_Construct_UClass_UAgonyComponent_Statics; \
public: \
	DECLARE_CLASS(UAgonyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UAgonyComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAgonyComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInAgony=NETFIELD_REP_START, \
		_isAgonyMoriable, \
		_inAttackTrailDamageCooldown, \
		NETFIELD_REP_END=_inAttackTrailDamageCooldown	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAgonyComponent(); \
	friend struct Z_Construct_UClass_UAgonyComponent_Statics; \
public: \
	DECLARE_CLASS(UAgonyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UAgonyComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAgonyComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInAgony=NETFIELD_REP_START, \
		_isAgonyMoriable, \
		_inAttackTrailDamageCooldown, \
		NETFIELD_REP_END=_inAttackTrailDamageCooldown	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgonyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgonyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgonyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgonyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAgonyComponent(UAgonyComponent&&); \
	NO_API UAgonyComponent(const UAgonyComponent&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAgonyComponent(UAgonyComponent&&); \
	NO_API UAgonyComponent(const UAgonyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgonyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgonyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAgonyComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isInAgony() { return STRUCT_OFFSET(UAgonyComponent, _isInAgony); } \
	FORCEINLINE static uint32 __PPO___isAgonyMoriable() { return STRUCT_OFFSET(UAgonyComponent, _isAgonyMoriable); } \
	FORCEINLINE static uint32 __PPO___agonyNumberOfHookForMiniMori() { return STRUCT_OFFSET(UAgonyComponent, _agonyNumberOfHookForMiniMori); } \
	FORCEINLINE static uint32 __PPO___inAttackTrailDamageCooldown() { return STRUCT_OFFSET(UAgonyComponent, _inAttackTrailDamageCooldown); } \
	FORCEINLINE static uint32 __PPO___attackTrailDamageCooldownTime() { return STRUCT_OFFSET(UAgonyComponent, _attackTrailDamageCooldownTime); } \
	FORCEINLINE static uint32 __PPO___showAgonyFXEvents() { return STRUCT_OFFSET(UAgonyComponent, _showAgonyFXEvents); } \
	FORCEINLINE static uint32 __PPO___hideAgonyFXEvents() { return STRUCT_OFFSET(UAgonyComponent, _hideAgonyFXEvents); }


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_15_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UAgonyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_AgonyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
