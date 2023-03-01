// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDGAMEPLAY_PowerChargeComponent_generated_h
#error "PowerChargeComponent.generated.h already included, missing '#pragma once' in PowerChargeComponent.h"
#endif
#define DBDGAMEPLAY_PowerChargeComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_7_DELEGATE \
struct _Script_DBDGameplay_eventPowerChargeComponentOnPowerChargeChanged_Parms \
{ \
	float currentChargePercent; \
}; \
static inline void FPowerChargeComponentOnPowerChargeChanged_DelegateWrapper(const FMulticastScriptDelegate& PowerChargeComponentOnPowerChargeChanged, float currentChargePercent) \
{ \
	_Script_DBDGameplay_eventPowerChargeComponentOnPowerChargeChanged_Parms Parms; \
	Parms.currentChargePercent=currentChargePercent; \
	PowerChargeComponentOnPowerChargeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCurrentChargeChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentCharge);


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCurrentChargeChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentCharge);


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPowerChargeComponent(); \
	friend struct Z_Construct_UClass_UPowerChargeComponent_Statics; \
public: \
	DECLARE_CLASS(UPowerChargeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPowerChargeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentCharge=NETFIELD_REP_START, \
		_forceFullCharge, \
		NETFIELD_REP_END=_forceFullCharge	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUPowerChargeComponent(); \
	friend struct Z_Construct_UClass_UPowerChargeComponent_Statics; \
public: \
	DECLARE_CLASS(UPowerChargeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPowerChargeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentCharge=NETFIELD_REP_START, \
		_forceFullCharge, \
		NETFIELD_REP_END=_forceFullCharge	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPowerChargeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPowerChargeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerChargeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerChargeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerChargeComponent(UPowerChargeComponent&&); \
	NO_API UPowerChargeComponent(const UPowerChargeComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPowerChargeComponent(UPowerChargeComponent&&); \
	NO_API UPowerChargeComponent(const UPowerChargeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPowerChargeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPowerChargeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPowerChargeComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentCharge() { return STRUCT_OFFSET(UPowerChargeComponent, _currentCharge); } \
	FORCEINLINE static uint32 __PPO___forceFullCharge() { return STRUCT_OFFSET(UPowerChargeComponent, _forceFullCharge); }


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_9_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UPowerChargeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_PowerChargeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
