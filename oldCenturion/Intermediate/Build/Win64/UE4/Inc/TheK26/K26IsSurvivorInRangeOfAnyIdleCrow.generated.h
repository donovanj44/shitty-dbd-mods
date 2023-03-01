// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AK26CrowProjectile;
class ACamperPlayer;
class UAuthoritativeActorPoolComponent;
#ifdef THEK26_K26IsSurvivorInRangeOfAnyIdleCrow_generated_h
#error "K26IsSurvivorInRangeOfAnyIdleCrow.generated.h already included, missing '#pragma once' in K26IsSurvivorInRangeOfAnyIdleCrow.h"
#endif
#define THEK26_K26IsSurvivorInRangeOfAnyIdleCrow_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_11_DELEGATE \
struct _Script_TheK26_eventK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged_Parms \
{ \
	bool isTrue; \
}; \
static inline void FK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged_DelegateWrapper(const FMulticastScriptDelegate& K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged, bool isTrue) \
{ \
	_Script_TheK26_eventK26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged_Parms Parms; \
	Parms.isTrue=isTrue ? true : false; \
	K26IsSurvivorInRangeOfAnyIdleCrowOnIsTrueChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_RPC_WRAPPERS \
	virtual void Multicast_SetIsTrue_Implementation(bool isTrue); \
 \
	DECLARE_FUNCTION(execAuthority_OnCrowAddedToPool); \
	DECLARE_FUNCTION(execAuthority_OnCrowProjectileStateChanged); \
	DECLARE_FUNCTION(execAuthority_OnInRangeChanged); \
	DECLARE_FUNCTION(execAuthority_SetVariables); \
	DECLARE_FUNCTION(execMulticast_SetIsTrue);


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SetIsTrue_Implementation(bool isTrue); \
 \
	DECLARE_FUNCTION(execAuthority_OnCrowAddedToPool); \
	DECLARE_FUNCTION(execAuthority_OnCrowProjectileStateChanged); \
	DECLARE_FUNCTION(execAuthority_OnInRangeChanged); \
	DECLARE_FUNCTION(execAuthority_SetVariables); \
	DECLARE_FUNCTION(execMulticast_SetIsTrue);


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_EVENT_PARMS \
	struct K26IsSurvivorInRangeOfAnyIdleCrow_eventMulticast_SetIsTrue_Parms \
	{ \
		bool isTrue; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26IsSurvivorInRangeOfAnyIdleCrow(); \
	friend struct Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics; \
public: \
	DECLARE_CLASS(UK26IsSurvivorInRangeOfAnyIdleCrow, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26IsSurvivorInRangeOfAnyIdleCrow)


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUK26IsSurvivorInRangeOfAnyIdleCrow(); \
	friend struct Z_Construct_UClass_UK26IsSurvivorInRangeOfAnyIdleCrow_Statics; \
public: \
	DECLARE_CLASS(UK26IsSurvivorInRangeOfAnyIdleCrow, UEventDrivenModifierCondition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26IsSurvivorInRangeOfAnyIdleCrow)


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26IsSurvivorInRangeOfAnyIdleCrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26IsSurvivorInRangeOfAnyIdleCrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26IsSurvivorInRangeOfAnyIdleCrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26IsSurvivorInRangeOfAnyIdleCrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26IsSurvivorInRangeOfAnyIdleCrow(UK26IsSurvivorInRangeOfAnyIdleCrow&&); \
	NO_API UK26IsSurvivorInRangeOfAnyIdleCrow(const UK26IsSurvivorInRangeOfAnyIdleCrow&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26IsSurvivorInRangeOfAnyIdleCrow(UK26IsSurvivorInRangeOfAnyIdleCrow&&); \
	NO_API UK26IsSurvivorInRangeOfAnyIdleCrow(const UK26IsSurvivorInRangeOfAnyIdleCrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26IsSurvivorInRangeOfAnyIdleCrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26IsSurvivorInRangeOfAnyIdleCrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26IsSurvivorInRangeOfAnyIdleCrow)


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_13_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26IsSurvivorInRangeOfAnyIdleCrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26IsSurvivorInRangeOfAnyIdleCrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
