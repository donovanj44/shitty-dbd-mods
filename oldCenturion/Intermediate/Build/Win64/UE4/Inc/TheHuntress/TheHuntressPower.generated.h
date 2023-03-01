// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
class UAkComponent;
class UHatchetCooldown;
class UBaseProjectileLauncher;
#ifdef THEHUNTRESS_TheHuntressPower_generated_h
#error "TheHuntressPower.generated.h already included, missing '#pragma once' in TheHuntressPower.h"
#endif
#define THEHUNTRESS_TheHuntressPower_generated_h

#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_RPC_WRAPPERS \
	virtual void StartHatchetShineCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execGetOwningKiller); \
	DECLARE_FUNCTION(execHasHatchet); \
	DECLARE_FUNCTION(execIsHatchetThrowFullyCharged); \
	DECLARE_FUNCTION(execSetHatchetVisible); \
	DECLARE_FUNCTION(execSetPercentThrowStrength); \
	DECLARE_FUNCTION(execStartHatchetShineCosmetic);


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartHatchetShineCosmetic_Implementation(); \
 \
	DECLARE_FUNCTION(execGetOwningKiller); \
	DECLARE_FUNCTION(execHasHatchet); \
	DECLARE_FUNCTION(execIsHatchetThrowFullyCharged); \
	DECLARE_FUNCTION(execSetHatchetVisible); \
	DECLARE_FUNCTION(execSetPercentThrowStrength); \
	DECLARE_FUNCTION(execStartHatchetShineCosmetic);


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_EVENT_PARMS \
	struct TheHuntressPower_eventGetAkAudioHatchetSpawner_Parms \
	{ \
		UAkComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TheHuntressPower_eventGetAkAudioHatchetSpawner_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TheHuntressPower_eventGetHatchetCooldown_Parms \
	{ \
		UHatchetCooldown* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TheHuntressPower_eventGetHatchetCooldown_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TheHuntressPower_eventGetHatchetProjectileLauncher_Parms \
	{ \
		UBaseProjectileLauncher* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TheHuntressPower_eventGetHatchetProjectileLauncher_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATheHuntressPower(); \
	friend struct Z_Construct_UClass_ATheHuntressPower_Statics; \
public: \
	DECLARE_CLASS(ATheHuntressPower, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheHuntress"), NO_API) \
	DECLARE_SERIALIZER(ATheHuntressPower)


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATheHuntressPower(); \
	friend struct Z_Construct_UClass_ATheHuntressPower_Statics; \
public: \
	DECLARE_CLASS(ATheHuntressPower, ACollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheHuntress"), NO_API) \
	DECLARE_SERIALIZER(ATheHuntressPower)


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATheHuntressPower(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATheHuntressPower) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheHuntressPower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheHuntressPower); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheHuntressPower(ATheHuntressPower&&); \
	NO_API ATheHuntressPower(const ATheHuntressPower&); \
public:


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATheHuntressPower(ATheHuntressPower&&); \
	NO_API ATheHuntressPower(const ATheHuntressPower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATheHuntressPower); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATheHuntressPower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATheHuntressPower)


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_11_PROLOG \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_INCLASS \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEHUNTRESS_API UClass* StaticClass<class ATheHuntressPower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheHuntress_Public_TheHuntressPower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
