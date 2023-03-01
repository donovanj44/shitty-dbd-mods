// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_DBDObserverPlayer_generated_h
#error "DBDObserverPlayer.generated.h already included, missing '#pragma once' in DBDObserverPlayer.h"
#endif
#define DEADBYDAYLIGHT_DBDObserverPlayer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_RPC_WRAPPERS \
	virtual bool Server_PlayerReady_Validate(); \
	virtual void Server_PlayerReady_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_PlayerReady);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_PlayerReady_Validate(); \
	virtual void Server_PlayerReady_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_PlayerReady);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_EVENT_PARMS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDObserverPlayer(); \
	friend struct Z_Construct_UClass_ADBDObserverPlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDObserverPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDObserverPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_INCLASS \
private: \
	static void StaticRegisterNativesADBDObserverPlayer(); \
	friend struct Z_Construct_UClass_ADBDObserverPlayer_Statics; \
public: \
	DECLARE_CLASS(ADBDObserverPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDObserverPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDObserverPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDObserverPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDObserverPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDObserverPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDObserverPlayer(ADBDObserverPlayer&&); \
	NO_API ADBDObserverPlayer(const ADBDObserverPlayer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDObserverPlayer(ADBDObserverPlayer&&); \
	NO_API ADBDObserverPlayer(const ADBDObserverPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDObserverPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDObserverPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDObserverPlayer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___playerData() { return STRUCT_OFFSET(ADBDObserverPlayer, _playerData); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDObserverPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDObserverPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
