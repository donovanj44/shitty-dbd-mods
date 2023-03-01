// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_ChargerComponent_generated_h
#error "ChargerComponent.generated.h already included, missing '#pragma once' in ChargerComponent.h"
#endif
#define DEADBYDAYLIGHT_ChargerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_9_DELEGATE \
struct _Script_DeadByDaylight_eventChargerComponentOnChargePercentChange_Parms \
{ \
	float ChargePercent; \
}; \
static inline void FChargerComponentOnChargePercentChange_DelegateWrapper(const FMulticastScriptDelegate& ChargerComponentOnChargePercentChange, float ChargePercent) \
{ \
	_Script_DeadByDaylight_eventChargerComponentOnChargePercentChange_Parms Parms; \
	Parms.ChargePercent=ChargePercent; \
	ChargerComponentOnChargePercentChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_8_DELEGATE \
struct _Script_DeadByDaylight_eventChargerComponentOnChargeStateChange_Parms \
{ \
	bool Empty; \
}; \
static inline void FChargerComponentOnChargeStateChange_DelegateWrapper(const FMulticastScriptDelegate& ChargerComponentOnChargeStateChange, bool Empty) \
{ \
	_Script_DeadByDaylight_eventChargerComponentOnChargeStateChange_Parms Parms; \
	Parms.Empty=Empty ? true : false; \
	ChargerComponentOnChargeStateChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnergyLevel); \
	DECLARE_FUNCTION(execGetMaxEnergyLevel); \
	DECLARE_FUNCTION(execGetNormalizedEnergyLevel); \
	DECLARE_FUNCTION(execHasCharge); \
	DECLARE_FUNCTION(execOnRep_EnergyLevel); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetEnergyLevel); \
	DECLARE_FUNCTION(execSetMaxEnergyLevel); \
	DECLARE_FUNCTION(execSetNormalizedEnergyLevel); \
	DECLARE_FUNCTION(execUseEnergy);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnergyLevel); \
	DECLARE_FUNCTION(execGetMaxEnergyLevel); \
	DECLARE_FUNCTION(execGetNormalizedEnergyLevel); \
	DECLARE_FUNCTION(execHasCharge); \
	DECLARE_FUNCTION(execOnRep_EnergyLevel); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetEnergyLevel); \
	DECLARE_FUNCTION(execSetMaxEnergyLevel); \
	DECLARE_FUNCTION(execSetNormalizedEnergyLevel); \
	DECLARE_FUNCTION(execUseEnergy);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChargerComponent(); \
	friend struct Z_Construct_UClass_UChargerComponent_Statics; \
public: \
	DECLARE_CLASS(UChargerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChargerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChargerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentEnergyLevel=NETFIELD_REP_START, \
		_maxEnergyLevel, \
		NETFIELD_REP_END=_maxEnergyLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUChargerComponent(); \
	friend struct Z_Construct_UClass_UChargerComponent_Statics; \
public: \
	DECLARE_CLASS(UChargerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChargerComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UChargerComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentEnergyLevel=NETFIELD_REP_START, \
		_maxEnergyLevel, \
		NETFIELD_REP_END=_maxEnergyLevel	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChargerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChargerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargerComponent(UChargerComponent&&); \
	NO_API UChargerComponent(const UChargerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargerComponent(UChargerComponent&&); \
	NO_API UChargerComponent(const UChargerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChargerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EnergyType() { return STRUCT_OFFSET(UChargerComponent, EnergyType); } \
	FORCEINLINE static uint32 __PPO___currentEnergyLevel() { return STRUCT_OFFSET(UChargerComponent, _currentEnergyLevel); } \
	FORCEINLINE static uint32 __PPO___maxEnergyLevel() { return STRUCT_OFFSET(UChargerComponent, _maxEnergyLevel); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UChargerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ChargerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
