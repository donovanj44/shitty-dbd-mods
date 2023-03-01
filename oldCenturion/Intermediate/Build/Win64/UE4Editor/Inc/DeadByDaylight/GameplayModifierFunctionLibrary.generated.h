// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
struct FGameplayTag;
#ifdef DEADBYDAYLIGHT_GameplayModifierFunctionLibrary_generated_h
#error "GameplayModifierFunctionLibrary.generated.h already included, missing '#pragma once' in GameplayModifierFunctionLibrary.h"
#endif
#define DEADBYDAYLIGHT_GameplayModifierFunctionLibrary_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_ClearAllPlayerGameplayFlags); \
	DECLARE_FUNCTION(execAuthority_ClearAllPlayerGameplayModifiers); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerGameplayFlag); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerGameplayModifier); \
	DECLARE_FUNCTION(execAuthority_SetPlayerGameplayFlag); \
	DECLARE_FUNCTION(execAuthority_SetPlayerGameplayModifier);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_ClearAllPlayerGameplayFlags); \
	DECLARE_FUNCTION(execAuthority_ClearAllPlayerGameplayModifiers); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerGameplayFlag); \
	DECLARE_FUNCTION(execAuthority_ClearPlayerGameplayModifier); \
	DECLARE_FUNCTION(execAuthority_SetPlayerGameplayFlag); \
	DECLARE_FUNCTION(execAuthority_SetPlayerGameplayModifier);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayModifierFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayModifierFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayModifierFunctionLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayModifierFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGameplayModifierFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGameplayModifierFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayModifierFunctionLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayModifierFunctionLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayModifierFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayModifierFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModifierFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayModifierFunctionLibrary(UGameplayModifierFunctionLibrary&&); \
	NO_API UGameplayModifierFunctionLibrary(const UGameplayModifierFunctionLibrary&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayModifierFunctionLibrary(UGameplayModifierFunctionLibrary&&); \
	NO_API UGameplayModifierFunctionLibrary(const UGameplayModifierFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayModifierFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModifierFunctionLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayModifierFunctionLibrary)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGameplayModifierFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
