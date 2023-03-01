// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameplayModifierContainer;
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_GameplayModifierCondition_generated_h
#error "GameplayModifierCondition.generated.h already included, missing '#pragma once' in GameplayModifierCondition.h"
#endif
#define DEADBYDAYLIGHT_GameplayModifierCondition_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_RPC_WRAPPERS \
	virtual bool IsApplicable_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetOwningGameplayModifier); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execIsApplicable); \
	DECLARE_FUNCTION(execSetOwningGameplayModifier);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsApplicable_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetOwningGameplayModifier); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execIsApplicable); \
	DECLARE_FUNCTION(execSetOwningGameplayModifier);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_EVENT_PARMS \
	struct GameplayModifierCondition_eventIsApplicable_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayModifierCondition_eventIsApplicable_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayModifierCondition(); \
	friend struct Z_Construct_UClass_UGameplayModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UGameplayModifierCondition, UBaseModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayModifierCondition)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayModifierCondition(); \
	friend struct Z_Construct_UClass_UGameplayModifierCondition_Statics; \
public: \
	DECLARE_CLASS(UGameplayModifierCondition, UBaseModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayModifierCondition)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayModifierCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayModifierCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModifierCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayModifierCondition(UGameplayModifierCondition&&); \
	NO_API UGameplayModifierCondition(const UGameplayModifierCondition&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayModifierCondition(UGameplayModifierCondition&&); \
	NO_API UGameplayModifierCondition(const UGameplayModifierCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayModifierCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModifierCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayModifierCondition)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_9_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGameplayModifierCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
