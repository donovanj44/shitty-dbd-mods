// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARespawnableInteractable;
#ifdef SPECIALEVENTUTILITIES_RespawnableInteractable_generated_h
#error "RespawnableInteractable.generated.h already included, missing '#pragma once' in RespawnableInteractable.h"
#endif
#define SPECIALEVENTUTILITIES_RespawnableInteractable_generated_h

#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_9_DELEGATE \
struct _Script_SpecialEventUtilities_eventRespawnableInteractableOnIsInteractingChanged_Parms \
{ \
	ARespawnableInteractable* respawnableInteractable; \
	bool isInteracting; \
}; \
static inline void FRespawnableInteractableOnIsInteractingChanged_DelegateWrapper(const FMulticastScriptDelegate& RespawnableInteractableOnIsInteractingChanged, ARespawnableInteractable* respawnableInteractable, bool isInteracting) \
{ \
	_Script_SpecialEventUtilities_eventRespawnableInteractableOnIsInteractingChanged_Parms Parms; \
	Parms.respawnableInteractable=respawnableInteractable; \
	Parms.isInteracting=isInteracting ? true : false; \
	RespawnableInteractableOnIsInteractingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_8_DELEGATE \
struct _Script_SpecialEventUtilities_eventRespawnableInteractableOnInteractionEnded_Parms \
{ \
	ARespawnableInteractable* respawnableInteractable; \
}; \
static inline void FRespawnableInteractableOnInteractionEnded_DelegateWrapper(const FMulticastScriptDelegate& RespawnableInteractableOnInteractionEnded, ARespawnableInteractable* respawnableInteractable) \
{ \
	_Script_SpecialEventUtilities_eventRespawnableInteractableOnInteractionEnded_Parms Parms; \
	Parms.respawnableInteractable=respawnableInteractable; \
	RespawnableInteractableOnInteractionEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_SPARSE_DATA
#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsHidden); \
	DECLARE_FUNCTION(execOnRep_IsHidden);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsHidden); \
	DECLARE_FUNCTION(execOnRep_IsHidden);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_EVENT_PARMS
#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARespawnableInteractable(); \
	friend struct Z_Construct_UClass_ARespawnableInteractable_Statics; \
public: \
	DECLARE_CLASS(ARespawnableInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(ARespawnableInteractable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isHidden=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isHidden	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARespawnableInteractable(); \
	friend struct Z_Construct_UClass_ARespawnableInteractable_Statics; \
public: \
	DECLARE_CLASS(ARespawnableInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(ARespawnableInteractable) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isHidden=NETFIELD_REP_START, \
		NETFIELD_REP_END=_isHidden	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARespawnableInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARespawnableInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARespawnableInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARespawnableInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARespawnableInteractable(ARespawnableInteractable&&); \
	NO_API ARespawnableInteractable(const ARespawnableInteractable&); \
public:


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARespawnableInteractable(ARespawnableInteractable&&); \
	NO_API ARespawnableInteractable(const ARespawnableInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARespawnableInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARespawnableInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARespawnableInteractable)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isHidden() { return STRUCT_OFFSET(ARespawnableInteractable, _isHidden); }


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_11_PROLOG \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_EVENT_PARMS


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_INCLASS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<class ARespawnableInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnableInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
