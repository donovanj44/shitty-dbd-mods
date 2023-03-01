// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEHILLBILLY_HillbillyChainsawOverheatComponent_generated_h
#error "HillbillyChainsawOverheatComponent.generated.h already included, missing '#pragma once' in HillbillyChainsawOverheatComponent.h"
#endif
#define THEHILLBILLY_HillbillyChainsawOverheatComponent_generated_h

#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_10_DELEGATE \
struct _Script_TheHillbilly_eventHillbillyChainsawOverheatComponentOnHeatChargeUpdateDelegate_Parms \
{ \
	float currentChargePercent; \
	bool isChainsawOverheating; \
}; \
static inline void FHillbillyChainsawOverheatComponentOnHeatChargeUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& HillbillyChainsawOverheatComponentOnHeatChargeUpdateDelegate, const float currentChargePercent, bool isChainsawOverheating) \
{ \
	_Script_TheHillbilly_eventHillbillyChainsawOverheatComponentOnHeatChargeUpdateDelegate_Parms Parms; \
	Parms.currentChargePercent=currentChargePercent; \
	Parms.isChainsawOverheating=isChainsawOverheating ? true : false; \
	HillbillyChainsawOverheatComponentOnHeatChargeUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnHeatChargeEmpty); \
	DECLARE_FUNCTION(execAuthority_OnHeatChargeFull); \
	DECLARE_FUNCTION(execIsChainsawOverheating); \
	DECLARE_FUNCTION(execOnHeatChargeUpdate); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_IsChainsawOverheating);


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnHeatChargeEmpty); \
	DECLARE_FUNCTION(execAuthority_OnHeatChargeFull); \
	DECLARE_FUNCTION(execIsChainsawOverheating); \
	DECLARE_FUNCTION(execOnHeatChargeUpdate); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_IsChainsawOverheating);


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHillbillyChainsawOverheatComponent(); \
	friend struct Z_Construct_UClass_UHillbillyChainsawOverheatComponent_Statics; \
public: \
	DECLARE_CLASS(UHillbillyChainsawOverheatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheHillbilly"), NO_API) \
	DECLARE_SERIALIZER(UHillbillyChainsawOverheatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isChainsawOverheating=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isChainsawOverheating	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHillbillyChainsawOverheatComponent(); \
	friend struct Z_Construct_UClass_UHillbillyChainsawOverheatComponent_Statics; \
public: \
	DECLARE_CLASS(UHillbillyChainsawOverheatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheHillbilly"), NO_API) \
	DECLARE_SERIALIZER(UHillbillyChainsawOverheatComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isChainsawOverheating=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isChainsawOverheating	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHillbillyChainsawOverheatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHillbillyChainsawOverheatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHillbillyChainsawOverheatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHillbillyChainsawOverheatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHillbillyChainsawOverheatComponent(UHillbillyChainsawOverheatComponent&&); \
	NO_API UHillbillyChainsawOverheatComponent(const UHillbillyChainsawOverheatComponent&); \
public:


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHillbillyChainsawOverheatComponent(UHillbillyChainsawOverheatComponent&&); \
	NO_API UHillbillyChainsawOverheatComponent(const UHillbillyChainsawOverheatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHillbillyChainsawOverheatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHillbillyChainsawOverheatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHillbillyChainsawOverheatComponent)


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnHeatChargeUpdateDelegate() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, OnHeatChargeUpdateDelegate); } \
	FORCEINLINE static uint32 __PPO___isChainsawOverheating() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _isChainsawOverheating); } \
	FORCEINLINE static uint32 __PPO___chainsawHeatCharge() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _chainsawHeatCharge); } \
	FORCEINLINE static uint32 __PPO___heatMaxCharge() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _heatMaxCharge); } \
	FORCEINLINE static uint32 __PPO___heatRevStartAmount() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _heatRevStartAmount); } \
	FORCEINLINE static uint32 __PPO___heatRevChargeRate() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _heatRevChargeRate); } \
	FORCEINLINE static uint32 __PPO___heatDashChargeRate() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _heatDashChargeRate); } \
	FORCEINLINE static uint32 __PPO___heatDischargeRate() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _heatDischargeRate); } \
	FORCEINLINE static uint32 __PPO___overheatDischargeRate() { return STRUCT_OFFSET(UHillbillyChainsawOverheatComponent, _overheatDischargeRate); }


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_12_PROLOG
#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_INCLASS \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEHILLBILLY_API UClass* StaticClass<class UHillbillyChainsawOverheatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheHillbilly_Public_HillbillyChainsawOverheatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
