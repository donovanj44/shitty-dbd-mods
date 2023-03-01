// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class UCapsuleComponent;
#ifdef DEADBYDAYLIGHT_OtherCharactersVerticalCollisionsHandler_generated_h
#error "OtherCharactersVerticalCollisionsHandler.generated.h already included, missing '#pragma once' in OtherCharactersVerticalCollisionsHandler.h"
#endif
#define DEADBYDAYLIGHT_OtherCharactersVerticalCollisionsHandler_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeOverlapDetection); \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapEnter); \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapExit); \
	DECLARE_FUNCTION(execSetPawnDetector);


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeOverlapDetection); \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapEnter); \
	DECLARE_FUNCTION(execOnPawnDetectorOverlapExit); \
	DECLARE_FUNCTION(execSetPawnDetector);


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOtherCharactersVerticalCollisionsHandler(); \
	friend struct Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics; \
public: \
	DECLARE_CLASS(UOtherCharactersVerticalCollisionsHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UOtherCharactersVerticalCollisionsHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOtherCharactersVerticalCollisionsHandler(); \
	friend struct Z_Construct_UClass_UOtherCharactersVerticalCollisionsHandler_Statics; \
public: \
	DECLARE_CLASS(UOtherCharactersVerticalCollisionsHandler, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UOtherCharactersVerticalCollisionsHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOtherCharactersVerticalCollisionsHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOtherCharactersVerticalCollisionsHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOtherCharactersVerticalCollisionsHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOtherCharactersVerticalCollisionsHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOtherCharactersVerticalCollisionsHandler(UOtherCharactersVerticalCollisionsHandler&&); \
	NO_API UOtherCharactersVerticalCollisionsHandler(const UOtherCharactersVerticalCollisionsHandler&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOtherCharactersVerticalCollisionsHandler(UOtherCharactersVerticalCollisionsHandler&&); \
	NO_API UOtherCharactersVerticalCollisionsHandler(const UOtherCharactersVerticalCollisionsHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOtherCharactersVerticalCollisionsHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOtherCharactersVerticalCollisionsHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOtherCharactersVerticalCollisionsHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___ignoreBelowActors() { return STRUCT_OFFSET(UOtherCharactersVerticalCollisionsHandler, _ignoreBelowActors); } \
	FORCEINLINE static uint32 __PPO___overlappingActors() { return STRUCT_OFFSET(UOtherCharactersVerticalCollisionsHandler, _overlappingActors); } \
	FORCEINLINE static uint32 __PPO___pawnDetector() { return STRUCT_OFFSET(UOtherCharactersVerticalCollisionsHandler, _pawnDetector); }


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UOtherCharactersVerticalCollisionsHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_OtherCharactersVerticalCollisionsHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
