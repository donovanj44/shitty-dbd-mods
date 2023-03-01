// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ACharacter;
class ADBDPlayer;
enum class EPlayerTeam : uint8;
class ACamperPlayer;
class ASlasherPlayer;
#ifdef DEADBYDAYLIGHT_CharacterCollectionUtilities_generated_h
#error "CharacterCollectionUtilities.generated.h already included, missing '#pragma once' in CharacterCollectionUtilities.h"
#endif
#define DEADBYDAYLIGHT_CharacterCollectionUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllCharacters); \
	DECLARE_FUNCTION(execGetAllDBDPlayers); \
	DECLARE_FUNCTION(execGetCharactersByPlayerTeam); \
	DECLARE_FUNCTION(execGetInGamePlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivors); \
	DECLARE_FUNCTION(execGetInGameSurvivorsAsPlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivorsByRef); \
	DECLARE_FUNCTION(execGetKiller); \
	DECLARE_FUNCTION(execGetNumberOfInjuredHookedOrDyingSurvivors);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllCharacters); \
	DECLARE_FUNCTION(execGetAllDBDPlayers); \
	DECLARE_FUNCTION(execGetCharactersByPlayerTeam); \
	DECLARE_FUNCTION(execGetInGamePlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivors); \
	DECLARE_FUNCTION(execGetInGameSurvivorsAsPlayers); \
	DECLARE_FUNCTION(execGetInGameSurvivorsByRef); \
	DECLARE_FUNCTION(execGetKiller); \
	DECLARE_FUNCTION(execGetNumberOfInjuredHookedOrDyingSurvivors);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterCollectionUtilities(); \
	friend struct Z_Construct_UClass_UCharacterCollectionUtilities_Statics; \
public: \
	DECLARE_CLASS(UCharacterCollectionUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterCollectionUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterCollectionUtilities(); \
	friend struct Z_Construct_UClass_UCharacterCollectionUtilities_Statics; \
public: \
	DECLARE_CLASS(UCharacterCollectionUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterCollectionUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterCollectionUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterCollectionUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterCollectionUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterCollectionUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterCollectionUtilities(UCharacterCollectionUtilities&&); \
	NO_API UCharacterCollectionUtilities(const UCharacterCollectionUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterCollectionUtilities(UCharacterCollectionUtilities&&); \
	NO_API UCharacterCollectionUtilities(const UCharacterCollectionUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterCollectionUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterCollectionUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterCollectionUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCharacterCollectionUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollectionUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
