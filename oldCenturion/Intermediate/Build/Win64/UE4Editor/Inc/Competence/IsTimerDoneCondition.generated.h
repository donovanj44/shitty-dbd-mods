// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTimerObject;
#ifdef COMPETENCE_IsTimerDoneCondition_generated_h
#error "IsTimerDoneCondition.generated.h already included, missing '#pragma once' in IsTimerDoneCondition.h"
#endif
#define COMPETENCE_IsTimerDoneCondition_generated_h

#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Timer); \
	DECLARE_FUNCTION(execSetTimer);


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Timer); \
	DECLARE_FUNCTION(execSetTimer);


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsTimerDoneCondition(); \
	friend struct Z_Construct_UClass_UIsTimerDoneCondition_Statics; \
public: \
	DECLARE_CLASS(UIsTimerDoneCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UIsTimerDoneCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_timer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_timer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUIsTimerDoneCondition(); \
	friend struct Z_Construct_UClass_UIsTimerDoneCondition_Statics; \
public: \
	DECLARE_CLASS(UIsTimerDoneCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UIsTimerDoneCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_timer=NETFIELD_REP_START, \
		NETFIELD_REP_END=_timer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsTimerDoneCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsTimerDoneCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsTimerDoneCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsTimerDoneCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsTimerDoneCondition(UIsTimerDoneCondition&&); \
	NO_API UIsTimerDoneCondition(const UIsTimerDoneCondition&); \
public:


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsTimerDoneCondition(UIsTimerDoneCondition&&); \
	NO_API UIsTimerDoneCondition(const UIsTimerDoneCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsTimerDoneCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsTimerDoneCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsTimerDoneCondition)


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___timer() { return STRUCT_OFFSET(UIsTimerDoneCondition, _timer); }


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_8_PROLOG
#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_INCLASS \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class UIsTimerDoneCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_IsTimerDoneCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
