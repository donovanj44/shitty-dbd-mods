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
#ifdef GNOME2021_GnomeEventComponent_generated_h
#error "GnomeEventComponent.generated.h already included, missing '#pragma once' in GnomeEventComponent.h"
#endif
#define GNOME2021_GnomeEventComponent_generated_h

#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnEndGameStarted);


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnEndGameStarted);


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGnomeEventComponent(); \
	friend struct Z_Construct_UClass_UGnomeEventComponent_Statics; \
public: \
	DECLARE_CLASS(UGnomeEventComponent, URespawningEventComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gnome2021"), NO_API) \
	DECLARE_SERIALIZER(UGnomeEventComponent)


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGnomeEventComponent(); \
	friend struct Z_Construct_UClass_UGnomeEventComponent_Statics; \
public: \
	DECLARE_CLASS(UGnomeEventComponent, URespawningEventComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gnome2021"), NO_API) \
	DECLARE_SERIALIZER(UGnomeEventComponent)


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGnomeEventComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGnomeEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGnomeEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGnomeEventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGnomeEventComponent(UGnomeEventComponent&&); \
	NO_API UGnomeEventComponent(const UGnomeEventComponent&); \
public:


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGnomeEventComponent(UGnomeEventComponent&&); \
	NO_API UGnomeEventComponent(const UGnomeEventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGnomeEventComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGnomeEventComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGnomeEventComponent)


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactionRespawnableTrigger() { return STRUCT_OFFSET(UGnomeEventComponent, _interactionRespawnableTrigger); } \
	FORCEINLINE static uint32 __PPO___timedRespawnableTrigger() { return STRUCT_OFFSET(UGnomeEventComponent, _timedRespawnableTrigger); }


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_11_PROLOG
#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_INCLASS \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GNOME2021_API UClass* StaticClass<class UGnomeEventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Gnome2021_Public_GnomeEventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
