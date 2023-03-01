// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAtlantaTutorialPlayerHudController;
class UTutorialHighlightController;
class UTutorialNotificationController;
class UTutorialObjectiveController;
class AGenerator;
#ifdef DEADBYDAYLIGHT_TutorialGameMode_generated_h
#error "TutorialGameMode.generated.h already included, missing '#pragma once' in TutorialGameMode.h"
#endif
#define DEADBYDAYLIGHT_TutorialGameMode_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAtlantaTutorialPlayerHudController); \
	DECLARE_FUNCTION(execGetTutorialHighlightController); \
	DECLARE_FUNCTION(execGetTutorialNotificationController); \
	DECLARE_FUNCTION(execGetTutorialObjectiveController); \
	DECLARE_FUNCTION(execSetEscapeActivated); \
	DECLARE_FUNCTION(execSetEscapeGenerators);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAtlantaTutorialPlayerHudController); \
	DECLARE_FUNCTION(execGetTutorialHighlightController); \
	DECLARE_FUNCTION(execGetTutorialNotificationController); \
	DECLARE_FUNCTION(execGetTutorialObjectiveController); \
	DECLARE_FUNCTION(execSetEscapeActivated); \
	DECLARE_FUNCTION(execSetEscapeGenerators);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialGameMode(); \
	friend struct Z_Construct_UClass_ATutorialGameMode_Statics; \
public: \
	DECLARE_CLASS(ATutorialGameMode, ADBDBaseMatchGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATutorialGameMode(); \
	friend struct Z_Construct_UClass_ATutorialGameMode_Statics; \
public: \
	DECLARE_CLASS(ATutorialGameMode, ADBDBaseMatchGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutorialGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutorialGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialGameMode(ATutorialGameMode&&); \
	NO_API ATutorialGameMode(const ATutorialGameMode&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialGameMode(ATutorialGameMode&&); \
	NO_API ATutorialGameMode(const ATutorialGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tutorialObjectiveController() { return STRUCT_OFFSET(ATutorialGameMode, _tutorialObjectiveController); } \
	FORCEINLINE static uint32 __PPO___tutorialNotificationController() { return STRUCT_OFFSET(ATutorialGameMode, _tutorialNotificationController); } \
	FORCEINLINE static uint32 __PPO___tutorialHighlightController() { return STRUCT_OFFSET(ATutorialGameMode, _tutorialHighlightController); } \
	FORCEINLINE static uint32 __PPO___atlantaTutorialPlayerHudController() { return STRUCT_OFFSET(ATutorialGameMode, _atlantaTutorialPlayerHudController); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ATutorialGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TutorialGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS