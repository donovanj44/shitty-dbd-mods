// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UObject;
class ATutorialsUtilities;
#ifdef DEADBYDAYLIGHT_TutorialsUtilities_generated_h
#error "TutorialsUtilities.generated.h already included, missing '#pragma once' in TutorialsUtilities.h"
#endif
#define DEADBYDAYLIGHT_TutorialsUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_10_DELEGATE \
static inline void FTutorialsUtilitiesOnTutorialUIReady_DelegateWrapper(const FMulticastScriptDelegate& TutorialsUtilitiesOnTutorialUIReady) \
{ \
	TutorialsUtilitiesOnTutorialUIReady.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyAI); \
	DECLARE_FUNCTION(execGetTutorialsUtilities); \
	DECLARE_FUNCTION(execTriggerTutorialHudFadeIn); \
	DECLARE_FUNCTION(execTriggerTutorialHudFadeOut);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyAI); \
	DECLARE_FUNCTION(execGetTutorialsUtilities); \
	DECLARE_FUNCTION(execTriggerTutorialHudFadeIn); \
	DECLARE_FUNCTION(execTriggerTutorialHudFadeOut);


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialsUtilities(); \
	friend struct Z_Construct_UClass_ATutorialsUtilities_Statics; \
public: \
	DECLARE_CLASS(ATutorialsUtilities, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialsUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATutorialsUtilities(); \
	friend struct Z_Construct_UClass_ATutorialsUtilities_Statics; \
public: \
	DECLARE_CLASS(ATutorialsUtilities, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATutorialsUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATutorialsUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATutorialsUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialsUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialsUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialsUtilities(ATutorialsUtilities&&); \
	NO_API ATutorialsUtilities(const ATutorialsUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATutorialsUtilities(ATutorialsUtilities&&); \
	NO_API ATutorialsUtilities(const ATutorialsUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialsUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialsUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialsUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnTutorialUIReady() { return STRUCT_OFFSET(ATutorialsUtilities, OnTutorialUIReady); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ATutorialsUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TutorialsUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
