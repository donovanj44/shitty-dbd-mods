// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
#ifdef THEGUNSLINGER_SurvivorReelVelocityAdditiveStrategy_generated_h
#error "SurvivorReelVelocityAdditiveStrategy.generated.h already included, missing '#pragma once' in SurvivorReelVelocityAdditiveStrategy.h"
#endif
#define THEGUNSLINGER_SurvivorReelVelocityAdditiveStrategy_generated_h

#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnKillerSet);


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnKillerSet);


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivorReelVelocityAdditiveStrategy(); \
	friend struct Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics; \
public: \
	DECLARE_CLASS(USurvivorReelVelocityAdditiveStrategy, UBaseCharacterVelocityAdditiveStrategy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(USurvivorReelVelocityAdditiveStrategy) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBeingReeled=NETFIELD_REP_START, \
		_isBeingPulled, \
		NETFIELD_REP_END=_isBeingPulled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivorReelVelocityAdditiveStrategy(); \
	friend struct Z_Construct_UClass_USurvivorReelVelocityAdditiveStrategy_Statics; \
public: \
	DECLARE_CLASS(USurvivorReelVelocityAdditiveStrategy, UBaseCharacterVelocityAdditiveStrategy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGunslinger"), NO_API) \
	DECLARE_SERIALIZER(USurvivorReelVelocityAdditiveStrategy) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isBeingReeled=NETFIELD_REP_START, \
		_isBeingPulled, \
		NETFIELD_REP_END=_isBeingPulled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivorReelVelocityAdditiveStrategy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivorReelVelocityAdditiveStrategy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorReelVelocityAdditiveStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorReelVelocityAdditiveStrategy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorReelVelocityAdditiveStrategy(USurvivorReelVelocityAdditiveStrategy&&); \
	NO_API USurvivorReelVelocityAdditiveStrategy(const USurvivorReelVelocityAdditiveStrategy&); \
public:


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorReelVelocityAdditiveStrategy(USurvivorReelVelocityAdditiveStrategy&&); \
	NO_API USurvivorReelVelocityAdditiveStrategy(const USurvivorReelVelocityAdditiveStrategy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorReelVelocityAdditiveStrategy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorReelVelocityAdditiveStrategy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivorReelVelocityAdditiveStrategy)


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___reelSpeed() { return STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _reelSpeed); } \
	FORCEINLINE static uint32 __PPO___minimumLinkLengthDelta() { return STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _minimumLinkLengthDelta); } \
	FORCEINLINE static uint32 __PPO___maximumVelocityAdditive() { return STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _maximumVelocityAdditive); } \
	FORCEINLINE static uint32 __PPO___isBeingReeled() { return STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _isBeingReeled); } \
	FORCEINLINE static uint32 __PPO___isBeingPulled() { return STRUCT_OFFSET(USurvivorReelVelocityAdditiveStrategy, _isBeingPulled); }


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_10_PROLOG
#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_INCLASS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGUNSLINGER_API UClass* StaticClass<class USurvivorReelVelocityAdditiveStrategy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheGunslinger_Public_SurvivorReelVelocityAdditiveStrategy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
