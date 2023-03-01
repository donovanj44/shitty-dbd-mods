// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
enum class EDBDScoreTypes : uint8;
class AActor;
#ifdef DEADBYDAYLIGHT_CharacterStatsHandlerComponent_generated_h
#error "CharacterStatsHandlerComponent.generated.h already included, missing '#pragma once' in CharacterStatsHandlerComponent.h"
#endif
#define DEADBYDAYLIGHT_CharacterStatsHandlerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializePreMatchStats); \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializePreMatchStats); \
	DECLARE_FUNCTION(execOnGameEvent); \
	DECLARE_FUNCTION(execReceiveGameEvent);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterStatsHandlerComponent(); \
	friend struct Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterStatsHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterStatsHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterStatsHandlerComponent(); \
	friend struct Z_Construct_UClass_UCharacterStatsHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterStatsHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterStatsHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterStatsHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterStatsHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterStatsHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterStatsHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterStatsHandlerComponent(UCharacterStatsHandlerComponent&&); \
	NO_API UCharacterStatsHandlerComponent(const UCharacterStatsHandlerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterStatsHandlerComponent(UCharacterStatsHandlerComponent&&); \
	NO_API UCharacterStatsHandlerComponent(const UCharacterStatsHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterStatsHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterStatsHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterStatsHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCharacterStatsHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CharacterStatsHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
