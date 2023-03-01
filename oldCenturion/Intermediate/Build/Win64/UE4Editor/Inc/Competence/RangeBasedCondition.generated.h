// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPETENCE_RangeBasedCondition_generated_h
#error "RangeBasedCondition.generated.h already included, missing '#pragma once' in RangeBasedCondition.h"
#endif
#define COMPETENCE_RangeBasedCondition_generated_h

#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Range);


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Range);


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURangeBasedCondition(); \
	friend struct Z_Construct_UClass_URangeBasedCondition_Statics; \
public: \
	DECLARE_CLASS(URangeBasedCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(URangeBasedCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_range=NETFIELD_REP_START, \
		NETFIELD_REP_END=_range	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_INCLASS \
private: \
	static void StaticRegisterNativesURangeBasedCondition(); \
	friend struct Z_Construct_UClass_URangeBasedCondition_Statics; \
public: \
	DECLARE_CLASS(URangeBasedCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(URangeBasedCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_range=NETFIELD_REP_START, \
		NETFIELD_REP_END=_range	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URangeBasedCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URangeBasedCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URangeBasedCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URangeBasedCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URangeBasedCondition(URangeBasedCondition&&); \
	NO_API URangeBasedCondition(const URangeBasedCondition&); \
public:


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URangeBasedCondition(URangeBasedCondition&&); \
	NO_API URangeBasedCondition(const URangeBasedCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URangeBasedCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URangeBasedCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URangeBasedCondition)


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___range() { return STRUCT_OFFSET(URangeBasedCondition, _range); }


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_6_PROLOG
#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_INCLASS \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class URangeBasedCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_RangeBasedCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
