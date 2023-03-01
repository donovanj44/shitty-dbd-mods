// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_SecondWind_generated_h
#error "SecondWind.generated.h already included, missing '#pragma once' in SecondWind.h"
#endif
#define DBDCOMPETENCE_SecondWind_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_RPC_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSecondWind(); \
	friend struct Z_Construct_UClass_USecondWind_Statics; \
public: \
	DECLARE_CLASS(USecondWind, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USecondWind) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentState=NETFIELD_REP_START, \
		_amountHealed, \
		NETFIELD_REP_END=_amountHealed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSecondWind(); \
	friend struct Z_Construct_UClass_USecondWind_Statics; \
public: \
	DECLARE_CLASS(USecondWind, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USecondWind) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentState=NETFIELD_REP_START, \
		_amountHealed, \
		NETFIELD_REP_END=_amountHealed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USecondWind(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USecondWind) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecondWind); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecondWind); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USecondWind(USecondWind&&); \
	NO_API USecondWind(const USecondWind&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USecondWind(USecondWind&&); \
	NO_API USecondWind(const USecondWind&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecondWind); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecondWind); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USecondWind)


#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentState() { return STRUCT_OFFSET(USecondWind, _currentState); } \
	FORCEINLINE static uint32 __PPO___amountHealed() { return STRUCT_OFFSET(USecondWind, _amountHealed); } \
	FORCEINLINE static uint32 __PPO___numberOfHealStateToHealToActivate() { return STRUCT_OFFSET(USecondWind, _numberOfHealStateToHealToActivate); } \
	FORCEINLINE static uint32 __PPO___durationOfHeal() { return STRUCT_OFFSET(USecondWind, _durationOfHeal); } \
	FORCEINLINE static uint32 __PPO___applyBrokenEffect() { return STRUCT_OFFSET(USecondWind, _applyBrokenEffect); }


#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_7_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class USecondWind>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_SecondWind_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
