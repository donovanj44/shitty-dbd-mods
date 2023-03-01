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
class AActor;
#ifdef DBDGAMEPLAY_PlayerInteractionListenerComponent_generated_h
#error "PlayerInteractionListenerComponent.generated.h already included, missing '#pragma once' in PlayerInteractionListenerComponent.h"
#endif
#define DBDGAMEPLAY_PlayerInteractionListenerComponent_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_10_DELEGATE \
struct _Script_DBDGameplay_eventPlayerInteractionListenerComponentInteractionDelegate_Parms \
{ \
	ADBDPlayer* Player; \
	FGameplayTag interactionSemantic; \
}; \
static inline void FPlayerInteractionListenerComponentInteractionDelegate_DelegateWrapper(const FScriptDelegate& PlayerInteractionListenerComponentInteractionDelegate, ADBDPlayer* Player, FGameplayTag interactionSemantic) \
{ \
	_Script_DBDGameplay_eventPlayerInteractionListenerComponentInteractionDelegate_Parms Parms; \
	Parms.Player=Player; \
	Parms.interactionSemantic=interactionSemantic; \
	PlayerInteractionListenerComponentInteractionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenToInteractionEnd); \
	DECLARE_FUNCTION(execListenToInteractionStart); \
	DECLARE_FUNCTION(execOnActorDestroyed); \
	DECLARE_FUNCTION(execUnlistenToInteractionEnd); \
	DECLARE_FUNCTION(execUnlistenToInteractionStart);


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenToInteractionEnd); \
	DECLARE_FUNCTION(execListenToInteractionStart); \
	DECLARE_FUNCTION(execOnActorDestroyed); \
	DECLARE_FUNCTION(execUnlistenToInteractionEnd); \
	DECLARE_FUNCTION(execUnlistenToInteractionStart);


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInteractionListenerComponent(); \
	friend struct Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerInteractionListenerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInteractionListenerComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInteractionListenerComponent(); \
	friend struct Z_Construct_UClass_UPlayerInteractionListenerComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerInteractionListenerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInteractionListenerComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInteractionListenerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInteractionListenerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInteractionListenerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionListenerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInteractionListenerComponent(UPlayerInteractionListenerComponent&&); \
	NO_API UPlayerInteractionListenerComponent(const UPlayerInteractionListenerComponent&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInteractionListenerComponent(UPlayerInteractionListenerComponent&&); \
	NO_API UPlayerInteractionListenerComponent(const UPlayerInteractionListenerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInteractionListenerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInteractionListenerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInteractionListenerComponent)


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_12_PROLOG
#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class UPlayerInteractionListenerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_PlayerInteractionListenerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
