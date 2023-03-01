// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapsuleComponent;
class UBasePushStrategyComponent;
class UPrimitiveComponent;
class AActor;
class ACharacter;
#ifdef GAMEPLAYUTILITIES_CharacterPusherComponent_generated_h
#error "CharacterPusherComponent.generated.h already included, missing '#pragma once' in CharacterPusherComponent.h"
#endif
#define GAMEPLAYUTILITIES_CharacterPusherComponent_generated_h

#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstruct); \
	DECLARE_FUNCTION(execOnCharacterDetectorOverlapExit); \
	DECLARE_FUNCTION(execSetIgnoredCharacter);


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstruct); \
	DECLARE_FUNCTION(execOnCharacterDetectorOverlapExit); \
	DECLARE_FUNCTION(execSetIgnoredCharacter);


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterPusherComponent(); \
	friend struct Z_Construct_UClass_UCharacterPusherComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterPusherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCharacterPusherComponent)


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterPusherComponent(); \
	friend struct Z_Construct_UClass_UCharacterPusherComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterPusherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayUtilities"), NO_API) \
	DECLARE_SERIALIZER(UCharacterPusherComponent)


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterPusherComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterPusherComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterPusherComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterPusherComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterPusherComponent(UCharacterPusherComponent&&); \
	NO_API UCharacterPusherComponent(const UCharacterPusherComponent&); \
public:


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterPusherComponent(UCharacterPusherComponent&&); \
	NO_API UCharacterPusherComponent(const UCharacterPusherComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterPusherComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterPusherComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterPusherComponent)


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___charactersToPush() { return STRUCT_OFFSET(UCharacterPusherComponent, _charactersToPush); } \
	FORCEINLINE static uint32 __PPO___ignoredCharacters() { return STRUCT_OFFSET(UCharacterPusherComponent, _ignoredCharacters); } \
	FORCEINLINE static uint32 __PPO___characterDetector() { return STRUCT_OFFSET(UCharacterPusherComponent, _characterDetector); } \
	FORCEINLINE static uint32 __PPO___characterCollision() { return STRUCT_OFFSET(UCharacterPusherComponent, _characterCollision); } \
	FORCEINLINE static uint32 __PPO___pushStrategy() { return STRUCT_OFFSET(UCharacterPusherComponent, _pushStrategy); } \
	FORCEINLINE static uint32 __PPO___ignoredByPushedCharacters() { return STRUCT_OFFSET(UCharacterPusherComponent, _ignoredByPushedCharacters); }


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_12_PROLOG
#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_INCLASS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYUTILITIES_API UClass* StaticClass<class UCharacterPusherComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayUtilities_Public_CharacterPusherComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
