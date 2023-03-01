// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THECANNIBAL_CannibalChainsawPowerComponent_generated_h
#error "CannibalChainsawPowerComponent.generated.h already included, missing '#pragma once' in CannibalChainsawPowerComponent.h"
#endif
#define THECANNIBAL_CannibalChainsawPowerComponent_generated_h

#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_RPC_WRAPPERS \
	virtual void Multicast_OnTantrumPowerChargeFull_Implementation(); \
	virtual bool Server_OnTantrumPowerChargeFull_Validate(); \
	virtual void Server_OnTantrumPowerChargeFull_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnChainsawPowerChargeFull); \
	DECLARE_FUNCTION(execGetNumberOfChainsawPowerCharges); \
	DECLARE_FUNCTION(execLocal_OnTantrumPowerChargeFull); \
	DECLARE_FUNCTION(execMulticast_OnTantrumPowerChargeFull); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_NumPowerCharges); \
	DECLARE_FUNCTION(execServer_OnTantrumPowerChargeFull);


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnTantrumPowerChargeFull_Implementation(); \
	virtual bool Server_OnTantrumPowerChargeFull_Validate(); \
	virtual void Server_OnTantrumPowerChargeFull_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_OnChainsawPowerChargeFull); \
	DECLARE_FUNCTION(execGetNumberOfChainsawPowerCharges); \
	DECLARE_FUNCTION(execLocal_OnTantrumPowerChargeFull); \
	DECLARE_FUNCTION(execMulticast_OnTantrumPowerChargeFull); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_NumPowerCharges); \
	DECLARE_FUNCTION(execServer_OnTantrumPowerChargeFull);


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_EVENT_PARMS
#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCannibalChainsawPowerComponent(); \
	friend struct Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics; \
public: \
	DECLARE_CLASS(UCannibalChainsawPowerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheCannibal"), NO_API) \
	DECLARE_SERIALIZER(UCannibalChainsawPowerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCannibalChainsawPowerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInTantrum=NETFIELD_REP_START, \
		_numPowerCharges, \
		_numPowerChargesConsumed, \
		NETFIELD_REP_END=_numPowerChargesConsumed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCannibalChainsawPowerComponent(); \
	friend struct Z_Construct_UClass_UCannibalChainsawPowerComponent_Statics; \
public: \
	DECLARE_CLASS(UCannibalChainsawPowerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheCannibal"), NO_API) \
	DECLARE_SERIALIZER(UCannibalChainsawPowerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UCannibalChainsawPowerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInTantrum=NETFIELD_REP_START, \
		_numPowerCharges, \
		_numPowerChargesConsumed, \
		NETFIELD_REP_END=_numPowerChargesConsumed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCannibalChainsawPowerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCannibalChainsawPowerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCannibalChainsawPowerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCannibalChainsawPowerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCannibalChainsawPowerComponent(UCannibalChainsawPowerComponent&&); \
	NO_API UCannibalChainsawPowerComponent(const UCannibalChainsawPowerComponent&); \
public:


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCannibalChainsawPowerComponent(UCannibalChainsawPowerComponent&&); \
	NO_API UCannibalChainsawPowerComponent(const UCannibalChainsawPowerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCannibalChainsawPowerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCannibalChainsawPowerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCannibalChainsawPowerComponent)


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chainsawPowerCharge() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawPowerCharge); } \
	FORCEINLINE static uint32 __PPO___chainsawPowerDischarge() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawPowerDischarge); } \
	FORCEINLINE static uint32 __PPO___tantrumPowerCharge() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumPowerCharge); } \
	FORCEINLINE static uint32 __PPO___isInTantrum() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _isInTantrum); } \
	FORCEINLINE static uint32 __PPO___numPowerCharges() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _numPowerCharges); } \
	FORCEINLINE static uint32 __PPO___numPowerChargesConsumed() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _numPowerChargesConsumed); } \
	FORCEINLINE static uint32 __PPO___chainsawDashDuration() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawDashDuration); } \
	FORCEINLINE static uint32 __PPO___chainsawPowerMaxCharge() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawPowerMaxCharge); } \
	FORCEINLINE static uint32 __PPO___chainsawChargeRate() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawChargeRate); } \
	FORCEINLINE static uint32 __PPO___chainsawMaxNumberOfCharges() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawMaxNumberOfCharges); } \
	FORCEINLINE static uint32 __PPO___chainsawCooldownIncreaseRate() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawCooldownIncreaseRate); } \
	FORCEINLINE static uint32 __PPO___chainsawCooldownDuration() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawCooldownDuration); } \
	FORCEINLINE static uint32 __PPO___chainsawMaxCooldownDuration() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _chainsawMaxCooldownDuration); } \
	FORCEINLINE static uint32 __PPO___tantrumChargeRate() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumChargeRate); } \
	FORCEINLINE static uint32 __PPO___tantrumDischargeRate() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumDischargeRate); } \
	FORCEINLINE static uint32 __PPO___tantrumMaxCharge() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumMaxCharge); } \
	FORCEINLINE static uint32 __PPO___tantrumDurationIncreaseRate() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumDurationIncreaseRate); } \
	FORCEINLINE static uint32 __PPO___tantrumDuration() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumDuration); } \
	FORCEINLINE static uint32 __PPO___tantrumMaxDuration() { return STRUCT_OFFSET(UCannibalChainsawPowerComponent, _tantrumMaxDuration); }


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_12_PROLOG \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_INCLASS \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THECANNIBAL_API UClass* StaticClass<class UCannibalChainsawPowerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheCannibal_Public_CannibalChainsawPowerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
