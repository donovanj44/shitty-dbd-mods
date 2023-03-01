// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef COMPETENCE_BaseModifierCondition_generated_h
#error "BaseModifierCondition.generated.h already included, missing '#pragma once' in BaseModifierCondition.h"
#endif
#define COMPETENCE_BaseModifierCondition_generated_h

#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_RPC_WRAPPERS \
	virtual void InitializeSubjectProviderClass_Implementation(); \
 \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execInitializeSubjectProviderClass); \
	DECLARE_FUNCTION(execOnRep_OwningModifier); \
	DECLARE_FUNCTION(execOnRep_SubjectProviderClass); \
	DECLARE_FUNCTION(execSetSubjectProviderClass);


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeSubjectProviderClass_Implementation(); \
 \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execInitializeSubjectProviderClass); \
	DECLARE_FUNCTION(execOnRep_OwningModifier); \
	DECLARE_FUNCTION(execOnRep_SubjectProviderClass); \
	DECLARE_FUNCTION(execSetSubjectProviderClass);


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_EVENT_PARMS
#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseModifierCondition(); \
	friend struct Z_Construct_UClass_UBaseModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UBaseModifierCondition, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UBaseModifierCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_owningModifier=NETFIELD_REP_START, \
		_subjectProviderClass, \
		NETFIELD_REP_END=_subjectProviderClass	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBaseModifierCondition(); \
	friend struct Z_Construct_UClass_UBaseModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UBaseModifierCondition, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UBaseModifierCondition) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_owningModifier=NETFIELD_REP_START, \
		_subjectProviderClass, \
		NETFIELD_REP_END=_subjectProviderClass	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseModifierCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseModifierCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseModifierCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseModifierCondition(UBaseModifierCondition&&); \
	NO_API UBaseModifierCondition(const UBaseModifierCondition&); \
public:


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseModifierCondition(UBaseModifierCondition&&); \
	NO_API UBaseModifierCondition(const UBaseModifierCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseModifierCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseModifierCondition)


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___owningModifier() { return STRUCT_OFFSET(UBaseModifierCondition, _owningModifier); } \
	FORCEINLINE static uint32 __PPO___subjectProvider() { return STRUCT_OFFSET(UBaseModifierCondition, _subjectProvider); } \
	FORCEINLINE static uint32 __PPO___subjectProviderClass() { return STRUCT_OFFSET(UBaseModifierCondition, _subjectProviderClass); }


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_10_PROLOG \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_EVENT_PARMS


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_INCLASS \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class UBaseModifierCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_BaseModifierCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
