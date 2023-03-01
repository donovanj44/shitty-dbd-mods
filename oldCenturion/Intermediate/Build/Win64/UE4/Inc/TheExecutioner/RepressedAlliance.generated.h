// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
class UInteractionDefinition;
#ifdef THEEXECUTIONER_RepressedAlliance_generated_h
#error "RepressedAlliance.generated.h already included, missing '#pragma once' in RepressedAlliance.h"
#endif
#define THEEXECUTIONER_RepressedAlliance_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_RPC_WRAPPERS \
	virtual bool Server_OnActionInputPressed_Validate(AGenerator* ); \
	virtual void Server_OnActionInputPressed_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execOnRep_BlockedGenerator); \
	DECLARE_FUNCTION(execOnRep_CurrentRepairInteractionWithAbility); \
	DECLARE_FUNCTION(execServer_OnActionInputPressed);


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_OnActionInputPressed_Validate(AGenerator* ); \
	virtual void Server_OnActionInputPressed_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execOnRep_BlockedGenerator); \
	DECLARE_FUNCTION(execOnRep_CurrentRepairInteractionWithAbility); \
	DECLARE_FUNCTION(execServer_OnActionInputPressed);


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_EVENT_PARMS \
	struct RepressedAlliance_eventServer_OnActionInputPressed_Parms \
	{ \
		AGenerator* generator; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURepressedAlliance(); \
	friend struct Z_Construct_UClass_URepressedAlliance_Statics; \
public: \
	DECLARE_CLASS(URepressedAlliance, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(URepressedAlliance) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentRepairInteractionWithAbility=NETFIELD_REP_START, \
		_blockedGenerator, \
		NETFIELD_REP_END=_blockedGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURepressedAlliance(); \
	friend struct Z_Construct_UClass_URepressedAlliance_Statics; \
public: \
	DECLARE_CLASS(URepressedAlliance, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(URepressedAlliance) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentRepairInteractionWithAbility=NETFIELD_REP_START, \
		_blockedGenerator, \
		NETFIELD_REP_END=_blockedGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URepressedAlliance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URepressedAlliance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URepressedAlliance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URepressedAlliance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URepressedAlliance(URepressedAlliance&&); \
	NO_API URepressedAlliance(const URepressedAlliance&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URepressedAlliance(URepressedAlliance&&); \
	NO_API URepressedAlliance(const URepressedAlliance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URepressedAlliance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URepressedAlliance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URepressedAlliance)


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___secondaryActionProperties() { return STRUCT_OFFSET(URepressedAlliance, _secondaryActionProperties); } \
	FORCEINLINE static uint32 __PPO___repairTimesNeededToActivate() { return STRUCT_OFFSET(URepressedAlliance, _repairTimesNeededToActivate); } \
	FORCEINLINE static uint32 __PPO___generatorBlockDuration() { return STRUCT_OFFSET(URepressedAlliance, _generatorBlockDuration); } \
	FORCEINLINE static uint32 __PPO___currentRepairInteractionWithAbility() { return STRUCT_OFFSET(URepressedAlliance, _currentRepairInteractionWithAbility); } \
	FORCEINLINE static uint32 __PPO___blockedGenerator() { return STRUCT_OFFSET(URepressedAlliance, _blockedGenerator); }


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_10_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class URepressedAlliance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_RepressedAlliance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
