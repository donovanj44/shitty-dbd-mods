// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ASlasherPlayer;
class ACamperPlayer;
#ifdef DEADBYDAYLIGHT_CharacterCollection_generated_h
#error "CharacterCollection.generated.h already included, missing '#pragma once' in CharacterCollection.h"
#endif
#define DEADBYDAYLIGHT_CharacterCollection_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllDBDPlayers); \
	DECLARE_FUNCTION(execGetKiller); \
	DECLARE_FUNCTION(execGetMainDBDPlayers); \
	DECLARE_FUNCTION(execGetSurvivors);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllDBDPlayers); \
	DECLARE_FUNCTION(execGetKiller); \
	DECLARE_FUNCTION(execGetMainDBDPlayers); \
	DECLARE_FUNCTION(execGetSurvivors);


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterCollection(); \
	friend struct Z_Construct_UClass_UCharacterCollection_Statics; \
public: \
	DECLARE_CLASS(UCharacterCollection, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterCollection)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterCollection(); \
	friend struct Z_Construct_UClass_UCharacterCollection_Statics; \
public: \
	DECLARE_CLASS(UCharacterCollection, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCharacterCollection)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterCollection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterCollection(UCharacterCollection&&); \
	NO_API UCharacterCollection(const UCharacterCollection&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterCollection(UCharacterCollection&&); \
	NO_API UCharacterCollection(const UCharacterCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterCollection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterCollection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterCollection)


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___killer() { return STRUCT_OFFSET(UCharacterCollection, _killer); } \
	FORCEINLINE static uint32 __PPO___survivors() { return STRUCT_OFFSET(UCharacterCollection, _survivors); } \
	FORCEINLINE static uint32 __PPO___mainDBDPlayers() { return STRUCT_OFFSET(UCharacterCollection, _mainDBDPlayers); } \
	FORCEINLINE static uint32 __PPO___otherCharacters() { return STRUCT_OFFSET(UCharacterCollection, _otherCharacters); } \
	FORCEINLINE static uint32 __PPO___nonPlayableCharacters() { return STRUCT_OFFSET(UCharacterCollection, _nonPlayableCharacters); } \
	FORCEINLINE static uint32 __PPO___allCharacters() { return STRUCT_OFFSET(UCharacterCollection, _allCharacters); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCharacterCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CharacterCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
