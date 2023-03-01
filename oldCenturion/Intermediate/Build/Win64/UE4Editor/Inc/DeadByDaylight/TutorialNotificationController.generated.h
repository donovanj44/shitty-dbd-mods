// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_TutorialNotificationController_generated_h
#error "TutorialNotificationController.generated.h already included, missing '#pragma once' in TutorialNotificationController.h"
#endif
#define DEADBYDAYLIGHT_TutorialNotificationController_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_6_DELEGATE \
struct _Script_DeadByDaylight_eventTutorialNotificationControllerOnBlockingNotificationDismissedEvent_Parms \
{ \
	FName tutorialNotificationId; \
}; \
static inline void FTutorialNotificationControllerOnBlockingNotificationDismissedEvent_DelegateWrapper(const FMulticastScriptDelegate& TutorialNotificationControllerOnBlockingNotificationDismissedEvent, FName tutorialNotificationId) \
{ \
	_Script_DeadByDaylight_eventTutorialNotificationControllerOnBlockingNotificationDismissedEvent_Parms Parms; \
	Parms.tutorialNotificationId=tutorialNotificationId; \
	TutorialNotificationControllerOnBlockingNotificationDismissedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideNotification); \
	DECLARE_FUNCTION(execOnBlockingNotificationDismissed); \
	DECLARE_FUNCTION(execShowBlockingNotification); \
	DECLARE_FUNCTION(execShowNotification);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideNotification); \
	DECLARE_FUNCTION(execOnBlockingNotificationDismissed); \
	DECLARE_FUNCTION(execShowBlockingNotification); \
	DECLARE_FUNCTION(execShowNotification);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTutorialNotificationController(); \
	friend struct Z_Construct_UClass_UTutorialNotificationController_Statics; \
public: \
	DECLARE_CLASS(UTutorialNotificationController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTutorialNotificationController)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUTutorialNotificationController(); \
	friend struct Z_Construct_UClass_UTutorialNotificationController_Statics; \
public: \
	DECLARE_CLASS(UTutorialNotificationController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTutorialNotificationController)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialNotificationController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialNotificationController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialNotificationController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialNotificationController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialNotificationController(UTutorialNotificationController&&); \
	NO_API UTutorialNotificationController(const UTutorialNotificationController&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialNotificationController(UTutorialNotificationController&&); \
	NO_API UTutorialNotificationController(const UTutorialNotificationController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialNotificationController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialNotificationController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTutorialNotificationController)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UTutorialNotificationController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TutorialNotificationController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
