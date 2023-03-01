// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEventDrivenModifierCondition;
struct FModifierReplicatedEventConditionData;
#ifdef COMPETENCE_BaseModifierContainer_generated_h
#error "BaseModifierContainer.generated.h already included, missing '#pragma once' in BaseModifierContainer.h"
#endif
#define COMPETENCE_BaseModifierContainer_generated_h

#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_SPARSE_DATA
#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateAndSetEventDrivenCondition); \
	DECLARE_FUNCTION(execIsApplicable); \
	DECLARE_FUNCTION(execOnRep_EventDrivenConditionData_Internal);


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateAndSetEventDrivenCondition); \
	DECLARE_FUNCTION(execIsApplicable); \
	DECLARE_FUNCTION(execOnRep_EventDrivenConditionData_Internal);


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_EVENT_PARMS
#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseModifierContainer(); \
	friend struct Z_Construct_UClass_UBaseModifierContainer_Statics; \
public: \
	DECLARE_CLASS(UBaseModifierContainer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UBaseModifierContainer) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseModifierContainer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_id=NETFIELD_REP_START, \
		_eventDrivenConditionData, \
		NETFIELD_REP_END=_eventDrivenConditionData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBaseModifierContainer(); \
	friend struct Z_Construct_UClass_UBaseModifierContainer_Statics; \
public: \
	DECLARE_CLASS(UBaseModifierContainer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Competence"), NO_API) \
	DECLARE_SERIALIZER(UBaseModifierContainer) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseModifierContainer*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_id=NETFIELD_REP_START, \
		_eventDrivenConditionData, \
		NETFIELD_REP_END=_eventDrivenConditionData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseModifierContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseModifierContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseModifierContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseModifierContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseModifierContainer(UBaseModifierContainer&&); \
	NO_API UBaseModifierContainer(const UBaseModifierContainer&); \
public:


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseModifierContainer(UBaseModifierContainer&&); \
	NO_API UBaseModifierContainer(const UBaseModifierContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseModifierContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseModifierContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseModifierContainer)


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___id() { return STRUCT_OFFSET(UBaseModifierContainer, _id); } \
	FORCEINLINE static uint32 __PPO___eventDrivenConditionData() { return STRUCT_OFFSET(UBaseModifierContainer, _eventDrivenConditionData); }


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_11_PROLOG \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_EVENT_PARMS


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_INCLASS \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_SPARSE_DATA \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPETENCE_API UClass* StaticClass<class UBaseModifierContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Competence_Public_BaseModifierContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
