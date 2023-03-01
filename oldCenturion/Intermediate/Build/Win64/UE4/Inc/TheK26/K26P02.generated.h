// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameEventData;
class AGenerator;
class ADBDPlayer;
#ifdef THEK26_K26P02_generated_h
#error "K26P02.generated.h already included, missing '#pragma once' in K26P02.h"
#endif
#define THEK26_K26P02_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_RPC_WRAPPERS \
	virtual void Multicast_TriggerPerk_Implementation(AGenerator* explodingGenerator); \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHookedOnScourgeHook); \
	DECLARE_FUNCTION(execGetScreamRevealLocationDuration); \
	DECLARE_FUNCTION(execMulticast_TriggerPerk);


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TriggerPerk_Implementation(AGenerator* explodingGenerator); \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHookedOnScourgeHook); \
	DECLARE_FUNCTION(execGetScreamRevealLocationDuration); \
	DECLARE_FUNCTION(execMulticast_TriggerPerk);


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_EVENT_PARMS \
	struct K26P02_eventCosmetic_MakeSurvivorScream_Parms \
	{ \
		const ADBDPlayer* screamingSurvivor; \
	}; \
	struct K26P02_eventMulticast_TriggerPerk_Parms \
	{ \
		AGenerator* explodingGenerator; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26P02(); \
	friend struct Z_Construct_UClass_UK26P02_Statics; \
public: \
	DECLARE_CLASS(UK26P02, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26P02)


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUK26P02(); \
	friend struct Z_Construct_UClass_UK26P02_Statics; \
public: \
	DECLARE_CLASS(UK26P02, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26P02)


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26P02(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26P02) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26P02); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26P02); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26P02(UK26P02&&); \
	NO_API UK26P02(const UK26P02&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26P02(UK26P02&&); \
	NO_API UK26P02(const UK26P02&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26P02); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26P02); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26P02)


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___generatorRegressPercentage() { return STRUCT_OFFSET(UK26P02, _generatorRegressPercentage); } \
	FORCEINLINE static uint32 __PPO___screamRevealLocationDuration() { return STRUCT_OFFSET(UK26P02, _screamRevealLocationDuration); }


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_10_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26P02_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26P02_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26P02>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26P02_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
