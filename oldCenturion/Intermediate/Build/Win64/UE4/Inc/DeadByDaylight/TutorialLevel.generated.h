// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETutorialStep : uint8;
#ifdef DEADBYDAYLIGHT_TutorialLevel_generated_h
#error "TutorialLevel.generated.h already included, missing '#pragma once' in TutorialLevel.h"
#endif
#define DEADBYDAYLIGHT_TutorialLevel_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddObjective); \
	DECLARE_FUNCTION(execCompleteObjective); \
	DECLARE_FUNCTION(execDisplayBlockingNotification); \
	DECLARE_FUNCTION(execDisplayNotification); \
	DECLARE_FUNCTION(execOnNotificationDismissed); \
	DECLARE_FUNCTION(execOnTutorialStepUpdated); \
	DECLARE_FUNCTION(execRemoveObjective); \
	DECLARE_FUNCTION(execSetHandledTutorialStep); \
	DECLARE_FUNCTION(execStartTutorial);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddObjective); \
	DECLARE_FUNCTION(execCompleteObjective); \
	DECLARE_FUNCTION(execDisplayBlockingNotification); \
	DECLARE_FUNCTION(execDisplayNotification); \
	DECLARE_FUNCTION(execOnNotificationDismissed); \
	DECLARE_FUNCTION(execOnTutorialStepUpdated); \
	DECLARE_FUNCTION(execRemoveObjective); \
	DECLARE_FUNCTION(execSetHandledTutorialStep); \
	DECLARE_FUNCTION(execStartTutorial);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_EVENT_PARMS \
	struct TutorialLevel_eventHandleNotificationDismissed_Parms \
	{ \
		FName notificationId; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialLevel(); \
	friend struct Z_Construct_UClass_ATutorialLevel_Statics; \
public: \
	DECLARE_CLASS(ATutorialLevel, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_INCLASS \
private: \
	static void StaticRegisterNativesATutorialLevel(); \
	friend struct Z_Construct_UClass_ATutorialLevel_Statics; \
public: \
	DECLARE_CLASS(ATutorialLevel, ALevelScriptActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutorialLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutorialLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialLevel(ATutorialLevel&&); \
	NO_API ATutorialLevel(const ATutorialLevel&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialLevel(ATutorialLevel&&); \
	NO_API ATutorialLevel(const ATutorialLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialLevel)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tutorialStarted() { return STRUCT_OFFSET(ATutorialLevel, _tutorialStarted); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_7_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ATutorialLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TutorialLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
