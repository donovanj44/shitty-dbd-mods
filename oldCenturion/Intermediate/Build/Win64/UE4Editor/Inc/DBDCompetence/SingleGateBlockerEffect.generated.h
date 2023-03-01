// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_SingleGateBlockerEffect_generated_h
#error "SingleGateBlockerEffect.generated.h already included, missing '#pragma once' in SingleGateBlockerEffect.h"
#endif
#define DBDCOMPETENCE_SingleGateBlockerEffect_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingleGateBlockerEffect(); \
	friend struct Z_Construct_UClass_USingleGateBlockerEffect_Statics; \
public: \
	DECLARE_CLASS(USingleGateBlockerEffect, UGateBlockerEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USingleGateBlockerEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInRange=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInRange	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSingleGateBlockerEffect(); \
	friend struct Z_Construct_UClass_USingleGateBlockerEffect_Statics; \
public: \
	DECLARE_CLASS(USingleGateBlockerEffect, UGateBlockerEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USingleGateBlockerEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isInRange=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isInRange	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USingleGateBlockerEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USingleGateBlockerEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USingleGateBlockerEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleGateBlockerEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USingleGateBlockerEffect(USingleGateBlockerEffect&&); \
	NO_API USingleGateBlockerEffect(const USingleGateBlockerEffect&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USingleGateBlockerEffect(USingleGateBlockerEffect&&); \
	NO_API USingleGateBlockerEffect(const USingleGateBlockerEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USingleGateBlockerEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingleGateBlockerEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USingleGateBlockerEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___distanceThreshold() { return STRUCT_OFFSET(USingleGateBlockerEffect, _distanceThreshold); } \
	FORCEINLINE static uint32 __PPO___gate() { return STRUCT_OFFSET(USingleGateBlockerEffect, _gate); } \
	FORCEINLINE static uint32 __PPO___isInRange() { return STRUCT_OFFSET(USingleGateBlockerEffect, _isInRange); }


#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_8_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class USingleGateBlockerEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_SingleGateBlockerEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
