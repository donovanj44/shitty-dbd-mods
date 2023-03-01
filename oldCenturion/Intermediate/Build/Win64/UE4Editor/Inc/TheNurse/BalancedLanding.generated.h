// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THENURSE_BalancedLanding_generated_h
#error "BalancedLanding.generated.h already included, missing '#pragma once' in BalancedLanding.h"
#endif
#define THENURSE_BalancedLanding_generated_h

#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_SPARSE_DATA
#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_RPC_WRAPPERS \
	virtual void Client_UnvalidateBalanceLanding_Implementation(); \
	virtual void Server_WarnBalancedLandingPredicted_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_UnvalidateBalanceLanding); \
	DECLARE_FUNCTION(execServer_WarnBalancedLandingPredicted);


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_UnvalidateBalanceLanding_Implementation(); \
	virtual void Server_WarnBalancedLandingPredicted_Implementation(); \
 \
	DECLARE_FUNCTION(execClient_UnvalidateBalanceLanding); \
	DECLARE_FUNCTION(execServer_WarnBalancedLandingPredicted);


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_EVENT_PARMS
#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBalancedLanding(); \
	friend struct Z_Construct_UClass_UBalancedLanding_Statics; \
public: \
	DECLARE_CLASS(UBalancedLanding, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheNurse"), NO_API) \
	DECLARE_SERIALIZER(UBalancedLanding)


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUBalancedLanding(); \
	friend struct Z_Construct_UClass_UBalancedLanding_Statics; \
public: \
	DECLARE_CLASS(UBalancedLanding, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheNurse"), NO_API) \
	DECLARE_SERIALIZER(UBalancedLanding)


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBalancedLanding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBalancedLanding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBalancedLanding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBalancedLanding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBalancedLanding(UBalancedLanding&&); \
	NO_API UBalancedLanding(const UBalancedLanding&); \
public:


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBalancedLanding(UBalancedLanding&&); \
	NO_API UBalancedLanding(const UBalancedLanding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBalancedLanding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBalancedLanding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBalancedLanding)


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___sprintDuration() { return STRUCT_OFFSET(UBalancedLanding, _sprintDuration); } \
	FORCEINLINE static uint32 __PPO___exhaustionDurationPerLevel() { return STRUCT_OFFSET(UBalancedLanding, _exhaustionDurationPerLevel); } \
	FORCEINLINE static uint32 __PPO___exhaustedEffect() { return STRUCT_OFFSET(UBalancedLanding, _exhaustedEffect); }


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_8_PROLOG \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_EVENT_PARMS


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_INCLASS \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_SPARSE_DATA \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THENURSE_API UClass* StaticClass<class UBalancedLanding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheNurse_Public_BalancedLanding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
