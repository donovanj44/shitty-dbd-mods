// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_Bloodlust_generated_h
#error "Bloodlust.generated.h already included, missing '#pragma once' in Bloodlust.h"
#endif
#define DEADBYDAYLIGHT_Bloodlust_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_RPC_WRAPPERS \
	virtual void Multicast_ResetBloodlust_Implementation(); \
 \
	DECLARE_FUNCTION(execDBD_SetBloodlust); \
	DECLARE_FUNCTION(execGetBloodlustTime); \
	DECLARE_FUNCTION(execMulticast_ResetBloodlust); \
	DECLARE_FUNCTION(execOnAllChaseEndedEvent); \
	DECLARE_FUNCTION(execOnChaseStartedEvent); \
	DECLARE_FUNCTION(execOnRep_BloodlustTime);


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_ResetBloodlust_Implementation(); \
 \
	DECLARE_FUNCTION(execDBD_SetBloodlust); \
	DECLARE_FUNCTION(execGetBloodlustTime); \
	DECLARE_FUNCTION(execMulticast_ResetBloodlust); \
	DECLARE_FUNCTION(execOnAllChaseEndedEvent); \
	DECLARE_FUNCTION(execOnChaseStartedEvent); \
	DECLARE_FUNCTION(execOnRep_BloodlustTime);


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBloodlust(); \
	friend struct Z_Construct_UClass_UBloodlust_Statics; \
public: \
	DECLARE_CLASS(UBloodlust, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBloodlust) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_bloodlustTime=NETFIELD_REP_START, \
		NETFIELD_REP_END=_bloodlustTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBloodlust(); \
	friend struct Z_Construct_UClass_UBloodlust_Statics; \
public: \
	DECLARE_CLASS(UBloodlust, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBloodlust) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_bloodlustTime=NETFIELD_REP_START, \
		NETFIELD_REP_END=_bloodlustTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBloodlust(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBloodlust) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodlust); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodlust); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodlust(UBloodlust&&); \
	NO_API UBloodlust(const UBloodlust&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodlust(UBloodlust&&); \
	NO_API UBloodlust(const UBloodlust&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodlust); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodlust); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBloodlust)


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BloodlustCurve() { return STRUCT_OFFSET(UBloodlust, BloodlustCurve); } \
	FORCEINLINE static uint32 __PPO___bloodlustTime() { return STRUCT_OFFSET(UBloodlust, _bloodlustTime); } \
	FORCEINLINE static uint32 __PPO___owningKiller() { return STRUCT_OFFSET(UBloodlust, _owningKiller); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBloodlust>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Bloodlust_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
