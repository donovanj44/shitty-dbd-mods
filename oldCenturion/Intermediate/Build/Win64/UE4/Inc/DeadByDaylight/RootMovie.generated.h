// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGFxObject;
#ifdef DEADBYDAYLIGHT_RootMovie_generated_h
#error "RootMovie.generated.h already included, missing '#pragma once' in RootMovie.h"
#endif
#define DEADBYDAYLIGHT_RootMovie_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAssert); \
	DECLARE_FUNCTION(execOnFlashReady); \
	DECLARE_FUNCTION(execOnMovieClosed); \
	DECLARE_FUNCTION(execOnScreenEnter); \
	DECLARE_FUNCTION(execOnScreenLeave); \
	DECLARE_FUNCTION(execOnScreenReady); \
	DECLARE_FUNCTION(execOpenLinkInBrowser); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execRegisterScreenControl); \
	DECLARE_FUNCTION(execRegisterUIControl); \
	DECLARE_FUNCTION(execRegisterView); \
	DECLARE_FUNCTION(execSetCursorAsSticky);


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAssert); \
	DECLARE_FUNCTION(execOnFlashReady); \
	DECLARE_FUNCTION(execOnMovieClosed); \
	DECLARE_FUNCTION(execOnScreenEnter); \
	DECLARE_FUNCTION(execOnScreenLeave); \
	DECLARE_FUNCTION(execOnScreenReady); \
	DECLARE_FUNCTION(execOpenLinkInBrowser); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execRegisterScreenControl); \
	DECLARE_FUNCTION(execRegisterUIControl); \
	DECLARE_FUNCTION(execRegisterView); \
	DECLARE_FUNCTION(execSetCursorAsSticky);


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURootMovie(); \
	friend struct Z_Construct_UClass_URootMovie_Statics; \
public: \
	DECLARE_CLASS(URootMovie, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(URootMovie)


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURootMovie(); \
	friend struct Z_Construct_UClass_URootMovie_Statics; \
public: \
	DECLARE_CLASS(URootMovie, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(URootMovie)


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URootMovie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URootMovie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMovie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMovie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMovie(URootMovie&&); \
	NO_API URootMovie(const URootMovie&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URootMovie(URootMovie&&); \
	NO_API URootMovie(const URootMovie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URootMovie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URootMovie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URootMovie)


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ScreenController() { return STRUCT_OFFSET(URootMovie, m_ScreenController); } \
	FORCEINLINE static uint32 __PPO__m_UIController() { return STRUCT_OFFSET(URootMovie, m_UIController); } \
	FORCEINLINE static uint32 __PPO__m_GameInstance() { return STRUCT_OFFSET(URootMovie, m_GameInstance); } \
	FORCEINLINE static uint32 __PPO___inputManager() { return STRUCT_OFFSET(URootMovie, _inputManager); }


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class URootMovie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_RootMovie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
