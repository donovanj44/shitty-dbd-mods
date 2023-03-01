// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEADBYDAYLIGHT_DisplayStand_generated_h
#error "DisplayStand.generated.h already included, missing '#pragma once' in DisplayStand.h"
#endif
#define DEADBYDAYLIGHT_DisplayStand_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCurrentActorDestroyed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCurrentActorDestroyed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADisplayStand(); \
	friend struct Z_Construct_UClass_ADisplayStand_Statics; \
public: \
	DECLARE_CLASS(ADisplayStand, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADisplayStand)


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADisplayStand(); \
	friend struct Z_Construct_UClass_ADisplayStand_Statics; \
public: \
	DECLARE_CLASS(ADisplayStand, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADisplayStand)


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADisplayStand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADisplayStand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADisplayStand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADisplayStand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADisplayStand(ADisplayStand&&); \
	NO_API ADisplayStand(const ADisplayStand&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADisplayStand(ADisplayStand&&); \
	NO_API ADisplayStand(const ADisplayStand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADisplayStand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADisplayStand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADisplayStand)


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentActorDisplayed() { return STRUCT_OFFSET(ADisplayStand, _currentActorDisplayed); } \
	FORCEINLINE static uint32 __PPO___currentActorDisplayedClass() { return STRUCT_OFFSET(ADisplayStand, _currentActorDisplayedClass); } \
	FORCEINLINE static uint32 __PPO___nextActorToDisplayClass() { return STRUCT_OFFSET(ADisplayStand, _nextActorToDisplayClass); } \
	FORCEINLINE static uint32 __PPO___offsetByClass() { return STRUCT_OFFSET(ADisplayStand, _offsetByClass); } \
	FORCEINLINE static uint32 __PPO___enableRotationByClass() { return STRUCT_OFFSET(ADisplayStand, _enableRotationByClass); } \
	FORCEINLINE static uint32 __PPO___defaultCharmClassDisplayable() { return STRUCT_OFFSET(ADisplayStand, _defaultCharmClassDisplayable); } \
	FORCEINLINE static uint32 __PPO___useOffsetMenuAnimations() { return STRUCT_OFFSET(ADisplayStand, _useOffsetMenuAnimations); } \
	FORCEINLINE static uint32 __PPO___displayDummyCharacter() { return STRUCT_OFFSET(ADisplayStand, _displayDummyCharacter); } \
	FORCEINLINE static uint32 __PPO___characterDropdown() { return STRUCT_OFFSET(ADisplayStand, _characterDropdown); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADisplayStand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DisplayStand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
