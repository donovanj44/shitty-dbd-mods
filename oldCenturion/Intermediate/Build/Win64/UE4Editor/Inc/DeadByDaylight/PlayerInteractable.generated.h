// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_PlayerInteractable_generated_h
#error "PlayerInteractable.generated.h already included, missing '#pragma once' in PlayerInteractable.h"
#endif
#define DEADBYDAYLIGHT_PlayerInteractable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_RPC_WRAPPERS \
	virtual void InitInteractable_Implementation(ADBDPlayer* player); \
 \
	DECLARE_FUNCTION(execInitInteractable);


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitInteractable_Implementation(ADBDPlayer* player); \
 \
	DECLARE_FUNCTION(execInitInteractable);


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_EVENT_PARMS \
	struct PlayerInteractable_eventInitInteractable_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerInteractable(); \
	friend struct Z_Construct_UClass_APlayerInteractable_Statics; \
public: \
	DECLARE_CLASS(APlayerInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APlayerInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerInteractable(); \
	friend struct Z_Construct_UClass_APlayerInteractable_Statics; \
public: \
	DECLARE_CLASS(APlayerInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(APlayerInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerInteractable(APlayerInteractable&&); \
	NO_API APlayerInteractable(const APlayerInteractable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerInteractable(APlayerInteractable&&); \
	NO_API APlayerInteractable(const APlayerInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_8_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class APlayerInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PlayerInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
