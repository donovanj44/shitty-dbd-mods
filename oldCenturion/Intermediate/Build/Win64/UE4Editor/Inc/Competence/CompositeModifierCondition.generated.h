// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPETENCE_CompositeModifierCondition_generated_h
#error "CompositeModifierCondition.generated.h already included, missing '#pragma once' in CompositeModifierCondition.h"
#endif
#define COMPETENCE_CompositeModifierCondition_generated_h

#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Conditions);


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Conditions);


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeModifierCondition(); \
	friend struct Z_Construct_UClass_UCompositeModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UCompositeModifierCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UCompositeModifierCondition) \
	virtual UObject* _getUObject() const override { return const_cast<UCompositeModifierCondition*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_conditions=NETFIELD_REP_START, \
		NETFIELD_REP_END=_conditions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCompositeModifierCondition(); \
	friend struct Z_Construct_UClass_UCompositeModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UCompositeModifierCondition, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UCompositeModifierCondition) \
	virtual UObject* _getUObject() const override { return const_cast<UCompositeModifierCondition*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_conditions=NETFIELD_REP_START, \
		NETFIELD_REP_END=_conditions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositeModifierCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeModifierCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeModifierCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositeModifierCondition(UCompositeModifierCondition&&); \
	NO_API UCompositeModifierCondition(const UCompositeModifierCondition&); \
public:


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositeModifierCondition(UCompositeModifierCondition&&); \
	NO_API UCompositeModifierCondition(const UCompositeModifierCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositeModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeModifierCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCompositeModifierCondition)


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___conditions() { return STRUCT_OFFSET(UCompositeModifierCondition, _conditions); }


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_7_PROLOG
#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_INCLASS \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class UCompositeModifierCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_CompositeModifierCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
