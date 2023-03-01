// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargeableComponent;
#ifdef DBDCOMPETENCE_HasPlayerReachedWiggleFillPercentCondition_generated_h
#error "HasPlayerReachedWiggleFillPercentCondition.generated.h already included, missing '#pragma once' in HasPlayerReachedWiggleFillPercentCondition.h"
#endif
#define DBDCOMPETENCE_HasPlayerReachedWiggleFillPercentCondition_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnOwnerWiggleChargePercentChanged); \
	DECLARE_FUNCTION(execOnRep_IsWigglePercentReached);


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnOwnerWiggleChargePercentChanged); \
	DECLARE_FUNCTION(execOnRep_IsWigglePercentReached);


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHasPlayerReachedWiggleFillPercentCondition(); \
	friend struct Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics; \
public: \
	DECLARE_CLASS(UHasPlayerReachedWiggleFillPercentCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UHasPlayerReachedWiggleFillPercentCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isWigglePercentReached=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isWigglePercentReached	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUHasPlayerReachedWiggleFillPercentCondition(); \
	friend struct Z_Construct_UClass_UHasPlayerReachedWiggleFillPercentCondition_Statics; \
public: \
	DECLARE_CLASS(UHasPlayerReachedWiggleFillPercentCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UHasPlayerReachedWiggleFillPercentCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isWigglePercentReached=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isWigglePercentReached	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHasPlayerReachedWiggleFillPercentCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHasPlayerReachedWiggleFillPercentCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHasPlayerReachedWiggleFillPercentCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasPlayerReachedWiggleFillPercentCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHasPlayerReachedWiggleFillPercentCondition(UHasPlayerReachedWiggleFillPercentCondition&&); \
	NO_API UHasPlayerReachedWiggleFillPercentCondition(const UHasPlayerReachedWiggleFillPercentCondition&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHasPlayerReachedWiggleFillPercentCondition(UHasPlayerReachedWiggleFillPercentCondition&&); \
	NO_API UHasPlayerReachedWiggleFillPercentCondition(const UHasPlayerReachedWiggleFillPercentCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHasPlayerReachedWiggleFillPercentCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHasPlayerReachedWiggleFillPercentCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHasPlayerReachedWiggleFillPercentCondition)


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isWigglePercentReached() { return STRUCT_OFFSET(UHasPlayerReachedWiggleFillPercentCondition, _isWigglePercentReached); }


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_8_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UHasPlayerReachedWiggleFillPercentCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_HasPlayerReachedWiggleFillPercentCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
