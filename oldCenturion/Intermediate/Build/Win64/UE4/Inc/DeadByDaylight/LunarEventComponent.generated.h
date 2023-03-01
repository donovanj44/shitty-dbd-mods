// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
class ALanternInteractable;
#ifdef DEADBYDAYLIGHT_LunarEventComponent_generated_h
#error "LunarEventComponent.generated.h already included, missing '#pragma once' in LunarEventComponent.h"
#endif
#define DEADBYDAYLIGHT_LunarEventComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_RPC_WRAPPERS \
	virtual bool Multicast_ResetLanternLight_Validate(ALanternInteractable* ); \
	virtual void Multicast_ResetLanternLight_Implementation(ALanternInteractable* lanternInteractable); \
 \
	DECLARE_FUNCTION(execAuthority_OnCamperEscape); \
	DECLARE_FUNCTION(execAuthority_OnCamperLostLantern); \
	DECLARE_FUNCTION(execAuthority_OnDestroyCamperLightGameEvent); \
	DECLARE_FUNCTION(execAuthority_OnFixGenerator); \
	DECLARE_FUNCTION(execAuthority_OnPickupLantern); \
	DECLARE_FUNCTION(execAuthority_OnPlayerLeaveGame); \
	DECLARE_FUNCTION(execAuthority_OnSlasherDestroysLantern); \
	DECLARE_FUNCTION(execLocal_OnCamperEscape); \
	DECLARE_FUNCTION(execLocal_OnCamperLostLantern); \
	DECLARE_FUNCTION(execMulticast_ResetLanternLight); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnLanternHoldTimerEnd); \
	DECLARE_FUNCTION(execOnRep_lanternCollectedCount);


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_ResetLanternLight_Validate(ALanternInteractable* ); \
	virtual void Multicast_ResetLanternLight_Implementation(ALanternInteractable* lanternInteractable); \
 \
	DECLARE_FUNCTION(execAuthority_OnCamperEscape); \
	DECLARE_FUNCTION(execAuthority_OnCamperLostLantern); \
	DECLARE_FUNCTION(execAuthority_OnDestroyCamperLightGameEvent); \
	DECLARE_FUNCTION(execAuthority_OnFixGenerator); \
	DECLARE_FUNCTION(execAuthority_OnPickupLantern); \
	DECLARE_FUNCTION(execAuthority_OnPlayerLeaveGame); \
	DECLARE_FUNCTION(execAuthority_OnSlasherDestroysLantern); \
	DECLARE_FUNCTION(execLocal_OnCamperEscape); \
	DECLARE_FUNCTION(execLocal_OnCamperLostLantern); \
	DECLARE_FUNCTION(execMulticast_ResetLanternLight); \
	DECLARE_FUNCTION(execOnFinishedPlaying); \
	DECLARE_FUNCTION(execOnLanternHoldTimerEnd); \
	DECLARE_FUNCTION(execOnRep_lanternCollectedCount);


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_EVENT_PARMS \
	struct LunarEventComponent_eventMulticast_ResetLanternLight_Parms \
	{ \
		ALanternInteractable* lanternInteractable; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULunarEventComponent(); \
	friend struct Z_Construct_UClass_ULunarEventComponent_Statics; \
public: \
	DECLARE_CLASS(ULunarEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULunarEventComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_lanternCollectedCount=NETFIELD_REP_START, \
		_additionalEventProgressCount, \
		NETFIELD_REP_END=_additionalEventProgressCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesULunarEventComponent(); \
	friend struct Z_Construct_UClass_ULunarEventComponent_Statics; \
public: \
	DECLARE_CLASS(ULunarEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULunarEventComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_lanternCollectedCount=NETFIELD_REP_START, \
		_additionalEventProgressCount, \
		NETFIELD_REP_END=_additionalEventProgressCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULunarEventComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULunarEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULunarEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULunarEventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULunarEventComponent(ULunarEventComponent&&); \
	NO_API ULunarEventComponent(const ULunarEventComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULunarEventComponent(ULunarEventComponent&&); \
	NO_API ULunarEventComponent(const ULunarEventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULunarEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULunarEventComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULunarEventComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___lanternCollectedCount() { return STRUCT_OFFSET(ULunarEventComponent, _lanternCollectedCount); } \
	FORCEINLINE static uint32 __PPO___additionalEventProgressCount() { return STRUCT_OFFSET(ULunarEventComponent, _additionalEventProgressCount); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ULunarEventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LunarEventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
