// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ATutorialGameMode;
class ATutorialGameState;
class UTutorialHighlightController;
class UTutorialNotificationController;
class UTutorialObjectiveController;
#ifdef DEADBYDAYLIGHT_TutorialFunctionLibrary_generated_h
#error "TutorialFunctionLibrary.generated.h already included, missing '#pragma once' in TutorialFunctionLibrary.h"
#endif
#define DEADBYDAYLIGHT_TutorialFunctionLibrary_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTutorialGameMode); \
	DECLARE_FUNCTION(execGetTutorialGameState); \
	DECLARE_FUNCTION(execGetTutorialHighlightController); \
	DECLARE_FUNCTION(execGetTutorialNotificationController); \
	DECLARE_FUNCTION(execGetTutorialObjectiveController); \
	DECLARE_FUNCTION(execIsInTutorial);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTutorialGameMode); \
	DECLARE_FUNCTION(execGetTutorialGameState); \
	DECLARE_FUNCTION(execGetTutorialHighlightController); \
	DECLARE_FUNCTION(execGetTutorialNotificationController); \
	DECLARE_FUNCTION(execGetTutorialObjectiveController); \
	DECLARE_FUNCTION(execIsInTutorial);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTutorialFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTutorialFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTutorialFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTutorialFunctionLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTutorialFunctionLibrary(); \
	friend struct Z_Construct_UClass_UTutorialFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UTutorialFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTutorialFunctionLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialFunctionLibrary(UTutorialFunctionLibrary&&); \
	NO_API UTutorialFunctionLibrary(const UTutorialFunctionLibrary&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialFunctionLibrary(UTutorialFunctionLibrary&&); \
	NO_API UTutorialFunctionLibrary(const UTutorialFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTutorialFunctionLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UTutorialFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TutorialFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
