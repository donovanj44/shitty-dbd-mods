// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_DBDGame_Lobby_generated_h
#error "DBDGame_Lobby.generated.h already included, missing '#pragma once' in DBDGame_Lobby.h"
#endif
#define DEADBYDAYLIGHT_DBDGame_Lobby_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDBD_AddBotToLobby); \
	DECLARE_FUNCTION(execDBD_AddBotToLobbyByName); \
	DECLARE_FUNCTION(execDBD_AddBotToLobbyNoLoadout); \
	DECLARE_FUNCTION(execDBD_AddBotToLobbyNoLoadoutByName); \
	DECLARE_FUNCTION(execDBD_FillLobby); \
	DECLARE_FUNCTION(execDBD_FillLobbyWithBotsByName); \
	DECLARE_FUNCTION(execDBD_RemoveBotByIndex);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDBD_AddBotToLobby); \
	DECLARE_FUNCTION(execDBD_AddBotToLobbyByName); \
	DECLARE_FUNCTION(execDBD_AddBotToLobbyNoLoadout); \
	DECLARE_FUNCTION(execDBD_AddBotToLobbyNoLoadoutByName); \
	DECLARE_FUNCTION(execDBD_FillLobby); \
	DECLARE_FUNCTION(execDBD_FillLobbyWithBotsByName); \
	DECLARE_FUNCTION(execDBD_RemoveBotByIndex);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDGame_Lobby(); \
	friend struct Z_Construct_UClass_ADBDGame_Lobby_Statics; \
public: \
	DECLARE_CLASS(ADBDGame_Lobby, ADBDBaseGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDGame_Lobby)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_INCLASS \
private: \
	static void StaticRegisterNativesADBDGame_Lobby(); \
	friend struct Z_Construct_UClass_ADBDGame_Lobby_Statics; \
public: \
	DECLARE_CLASS(ADBDGame_Lobby, ADBDBaseGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDGame_Lobby)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDGame_Lobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDGame_Lobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDGame_Lobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDGame_Lobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDGame_Lobby(ADBDGame_Lobby&&); \
	NO_API ADBDGame_Lobby(const ADBDGame_Lobby&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDGame_Lobby(ADBDGame_Lobby&&); \
	NO_API ADBDGame_Lobby(const ADBDGame_Lobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDGame_Lobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDGame_Lobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDGame_Lobby)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___identityValidation() { return STRUCT_OFFSET(ADBDGame_Lobby, _identityValidation); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDGame_Lobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDGame_Lobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
