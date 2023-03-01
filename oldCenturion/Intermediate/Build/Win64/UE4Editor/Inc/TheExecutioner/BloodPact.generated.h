// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEEXECUTIONER_BloodPact_generated_h
#error "BloodPact.generated.h already included, missing '#pragma once' in BloodPact.h"
#endif
#define THEEXECUTIONER_BloodPact_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnInRangeChanged);


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnInRangeChanged);


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBloodPact(); \
	friend struct Z_Construct_UClass_UBloodPact_Statics; \
public: \
	DECLARE_CLASS(UBloodPact, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UBloodPact)


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBloodPact(); \
	friend struct Z_Construct_UClass_UBloodPact_Statics; \
public: \
	DECLARE_CLASS(UBloodPact, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UBloodPact)


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBloodPact(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBloodPact) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodPact); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodPact); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodPact(UBloodPact&&); \
	NO_API UBloodPact(const UBloodPact&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBloodPact(UBloodPact&&); \
	NO_API UBloodPact(const UBloodPact&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBloodPact); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBloodPact); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBloodPact)


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___dyingToInjured() { return STRUCT_OFFSET(UBloodPact, _dyingToInjured); } \
	FORCEINLINE static uint32 __PPO___fullHealthStateOnly() { return STRUCT_OFFSET(UBloodPact, _fullHealthStateOnly); } \
	FORCEINLINE static uint32 __PPO___hasteEffectRange() { return STRUCT_OFFSET(UBloodPact, _hasteEffectRange); } \
	FORCEINLINE static uint32 __PPO___hasteEffectMovementSpeedIncrease() { return STRUCT_OFFSET(UBloodPact, _hasteEffectMovementSpeedIncrease); } \
	FORCEINLINE static uint32 __PPO___ownerStatusEffect() { return STRUCT_OFFSET(UBloodPact, _ownerStatusEffect); } \
	FORCEINLINE static uint32 __PPO___obsessionStatusEffect() { return STRUCT_OFFSET(UBloodPact, _obsessionStatusEffect); } \
	FORCEINLINE static uint32 __PPO___ownerHasteStatusEffect() { return STRUCT_OFFSET(UBloodPact, _ownerHasteStatusEffect); } \
	FORCEINLINE static uint32 __PPO___otherPlayerHasteStatusEffect() { return STRUCT_OFFSET(UBloodPact, _otherPlayerHasteStatusEffect); } \
	FORCEINLINE static uint32 __PPO___otherPlayer() { return STRUCT_OFFSET(UBloodPact, _otherPlayer); }


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_9_PROLOG
#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UBloodPact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_BloodPact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
