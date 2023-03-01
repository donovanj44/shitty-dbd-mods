// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETutorialStep : uint8;
#ifdef DEADBYDAYLIGHT_TutorialGameState_generated_h
#error "TutorialGameState.generated.h already included, missing '#pragma once' in TutorialGameState.h"
#endif
#define DEADBYDAYLIGHT_TutorialGameState_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_7_DELEGATE \
struct _Script_DeadByDaylight_eventTutorialGameStateOnCurrentTutorialStepChanged_Parms \
{ \
	ETutorialStep step; \
}; \
static inline void FTutorialGameStateOnCurrentTutorialStepChanged_DelegateWrapper(const FMulticastScriptDelegate& TutorialGameStateOnCurrentTutorialStepChanged, ETutorialStep step) \
{ \
	_Script_DeadByDaylight_eventTutorialGameStateOnCurrentTutorialStepChanged_Parms Parms; \
	Parms.step=step; \
	TutorialGameStateOnCurrentTutorialStepChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompleteLocallyControlledCharacterIntros); \
	DECLARE_FUNCTION(execGetCurrentTutorialStep); \
	DECLARE_FUNCTION(execIsTutorialStarted); \
	DECLARE_FUNCTION(execSetCurrentTutorialStep); \
	DECLARE_FUNCTION(execSetEscapeRequirementsVisibility); \
	DECLARE_FUNCTION(execSetForcedHatchVisibility); \
	DECLARE_FUNCTION(execTutorialEndReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompleteLocallyControlledCharacterIntros); \
	DECLARE_FUNCTION(execGetCurrentTutorialStep); \
	DECLARE_FUNCTION(execIsTutorialStarted); \
	DECLARE_FUNCTION(execSetCurrentTutorialStep); \
	DECLARE_FUNCTION(execSetEscapeRequirementsVisibility); \
	DECLARE_FUNCTION(execSetForcedHatchVisibility); \
	DECLARE_FUNCTION(execTutorialEndReached);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialGameState(); \
	friend struct Z_Construct_UClass_ATutorialGameState_Statics; \
public: \
	DECLARE_CLASS(ATutorialGameState, ADBDGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialGameState)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_INCLASS \
private: \
	static void StaticRegisterNativesATutorialGameState(); \
	friend struct Z_Construct_UClass_ATutorialGameState_Statics; \
public: \
	DECLARE_CLASS(ATutorialGameState, ADBDGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialGameState)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutorialGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutorialGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialGameState(ATutorialGameState&&); \
	NO_API ATutorialGameState(const ATutorialGameState&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialGameState(ATutorialGameState&&); \
	NO_API ATutorialGameState(const ATutorialGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialGameState)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___forceHatchVisible() { return STRUCT_OFFSET(ATutorialGameState, _forceHatchVisible); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ATutorialGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
