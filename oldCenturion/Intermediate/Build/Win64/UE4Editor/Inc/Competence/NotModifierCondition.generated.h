// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPETENCE_NotModifierCondition_generated_h
#error "NotModifierCondition.generated.h already included, missing '#pragma once' in NotModifierCondition.h"
#endif
#define COMPETENCE_NotModifierCondition_generated_h

#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Condition);


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Condition);


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNotModifierCondition(); \
	friend struct Z_Construct_UClass_UNotModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UNotModifierCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UNotModifierCondition) \
	virtual UObject* _getUObject() const override { return const_cast<UNotModifierCondition*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_condition=NETFIELD_REP_START, \
		NETFIELD_REP_END=_condition	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUNotModifierCondition(); \
	friend struct Z_Construct_UClass_UNotModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UNotModifierCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UNotModifierCondition) \
	virtual UObject* _getUObject() const override { return const_cast<UNotModifierCondition*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_condition=NETFIELD_REP_START, \
		NETFIELD_REP_END=_condition	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNotModifierCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNotModifierCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotModifierCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNotModifierCondition(UNotModifierCondition&&); \
	NO_API UNotModifierCondition(const UNotModifierCondition&); \
public:


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNotModifierCondition(UNotModifierCondition&&); \
	NO_API UNotModifierCondition(const UNotModifierCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNotModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNotModifierCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNotModifierCondition)


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___condition() { return STRUCT_OFFSET(UNotModifierCondition, _condition); }


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_7_PROLOG
#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_INCLASS \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_NotModifierCondition_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class UNotModifierCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_NotModifierCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
