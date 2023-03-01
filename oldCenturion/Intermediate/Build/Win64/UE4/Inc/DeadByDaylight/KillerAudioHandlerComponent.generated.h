// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ACamperPlayer;
enum class EAttackType : uint8;
#ifdef DEADBYDAYLIGHT_KillerAudioHandlerComponent_generated_h
#error "KillerAudioHandlerComponent.generated.h already included, missing '#pragma once' in KillerAudioHandlerComponent.h"
#endif
#define DEADBYDAYLIGHT_KillerAudioHandlerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChaseStart);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChaseStart);


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_EVENT_PARMS \
	struct KillerAudioHandlerComponent_eventChaseTriggerKillerReactionSpecificSurvivorSFX_Parms \
	{ \
		ADBDPlayer* camper; \
	}; \
	struct KillerAudioHandlerComponent_eventHitImpactOnSurvivorSFX_Parms \
	{ \
		ACamperPlayer* camper; \
		EAttackType attackType; \
		bool isWeaponHit; \
	}; \
	struct KillerAudioHandlerComponent_eventTriggerKillerReactionSpecificSurvivorSFX_Parms \
	{ \
		ADBDPlayer* camper; \
	}; \
	struct KillerAudioHandlerComponent_eventTriggerSurvivorDamageHitAudioSFX_Parms \
	{ \
		ACamperPlayer* camper; \
		EAttackType attackType; \
		bool causedKO; \
		bool isWeaponHit; \
		bool isLightHit; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKillerAudioHandlerComponent(); \
	friend struct Z_Construct_UClass_UKillerAudioHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerAudioHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillerAudioHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUKillerAudioHandlerComponent(); \
	friend struct Z_Construct_UClass_UKillerAudioHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UKillerAudioHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UKillerAudioHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKillerAudioHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKillerAudioHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerAudioHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerAudioHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerAudioHandlerComponent(UKillerAudioHandlerComponent&&); \
	NO_API UKillerAudioHandlerComponent(const UKillerAudioHandlerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKillerAudioHandlerComponent(UKillerAudioHandlerComponent&&); \
	NO_API UKillerAudioHandlerComponent(const UKillerAudioHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKillerAudioHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKillerAudioHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UKillerAudioHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UKillerAudioHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_KillerAudioHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
