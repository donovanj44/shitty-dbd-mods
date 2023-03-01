// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAudioEvent;
struct FMontagePlaybackDefinition;
#ifdef DEADBYDAYLIGHT_ScreamComponent_generated_h
#error "ScreamComponent.generated.h already included, missing '#pragma once' in ScreamComponent.h"
#endif
#define DEADBYDAYLIGHT_ScreamComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanScream); \
	DECLARE_FUNCTION(execPlayScreamSound); \
	DECLARE_FUNCTION(execPlayScreamSoundAndAnimation);


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanScream); \
	DECLARE_FUNCTION(execPlayScreamSound); \
	DECLARE_FUNCTION(execPlayScreamSoundAndAnimation);


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScreamComponent(); \
	friend struct Z_Construct_UClass_UScreamComponent_Statics; \
public: \
	DECLARE_CLASS(UScreamComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UScreamComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUScreamComponent(); \
	friend struct Z_Construct_UClass_UScreamComponent_Statics; \
public: \
	DECLARE_CLASS(UScreamComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UScreamComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScreamComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScreamComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreamComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreamComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreamComponent(UScreamComponent&&); \
	NO_API UScreamComponent(const UScreamComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScreamComponent(UScreamComponent&&); \
	NO_API UScreamComponent(const UScreamComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScreamComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScreamComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScreamComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___perkManager() { return STRUCT_OFFSET(UScreamComponent, _perkManager); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(UScreamComponent, _montagePlayer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UScreamComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ScreamComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
