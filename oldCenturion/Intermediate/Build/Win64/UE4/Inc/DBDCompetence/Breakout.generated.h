// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ASlasherPlayer;
#ifdef DBDCOMPETENCE_Breakout_generated_h
#error "Breakout.generated.h already included, missing '#pragma once' in Breakout.h"
#endif
#define DBDCOMPETENCE_Breakout_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_ImposeWiggleStatusEffect); \
	DECLARE_FUNCTION(execAuthority_OnRangeChanged); \
	DECLARE_FUNCTION(execOnRep_IsPerkActive); \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_ImposeWiggleStatusEffect); \
	DECLARE_FUNCTION(execAuthority_OnRangeChanged); \
	DECLARE_FUNCTION(execOnRep_IsPerkActive); \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBreakout(); \
	friend struct Z_Construct_UClass_UBreakout_Statics; \
public: \
	DECLARE_CLASS(UBreakout, UPerk, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBreakout) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPerkActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBreakout(); \
	friend struct Z_Construct_UClass_UBreakout_Statics; \
public: \
	DECLARE_CLASS(UBreakout, UPerk, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBreakout) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isPerkActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isPerkActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBreakout(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBreakout) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBreakout); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBreakout); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBreakout(UBreakout&&); \
	NO_API UBreakout(const UBreakout&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBreakout(UBreakout&&); \
	NO_API UBreakout(const UBreakout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBreakout); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBreakout); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBreakout)


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___slasher() { return STRUCT_OFFSET(UBreakout, _slasher); } \
	FORCEINLINE static uint32 __PPO___playerOwner() { return STRUCT_OFFSET(UBreakout, _playerOwner); } \
	FORCEINLINE static uint32 __PPO___hasteEffect() { return STRUCT_OFFSET(UBreakout, _hasteEffect); } \
	FORCEINLINE static uint32 __PPO___wiggleEffect() { return STRUCT_OFFSET(UBreakout, _wiggleEffect); } \
	FORCEINLINE static uint32 __PPO___survivorDistanceMax() { return STRUCT_OFFSET(UBreakout, _survivorDistanceMax); } \
	FORCEINLINE static uint32 __PPO___isPerkActive() { return STRUCT_OFFSET(UBreakout, _isPerkActive); }


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_10_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Breakout_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UBreakout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_Breakout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
