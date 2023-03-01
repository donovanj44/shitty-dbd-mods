// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ASlasherPlayer;
#ifdef THEK24_InjectSerumInteraction_generated_h
#error "InjectSerumInteraction.generated.h already included, missing '#pragma once' in InjectSerumInteraction.h"
#endif
#define THEK24_InjectSerumInteraction_generated_h

#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_CureSurvivor); \
	DECLARE_FUNCTION(execGetInjectionTarget); \
	DECLARE_FUNCTION(execOnKillerSet);


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_CureSurvivor); \
	DECLARE_FUNCTION(execGetInjectionTarget); \
	DECLARE_FUNCTION(execOnKillerSet);


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_EVENT_PARMS
#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInjectSerumInteraction(); \
	friend struct Z_Construct_UClass_UInjectSerumInteraction_Statics; \
public: \
	DECLARE_CLASS(UInjectSerumInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UInjectSerumInteraction)


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInjectSerumInteraction(); \
	friend struct Z_Construct_UClass_UInjectSerumInteraction_Statics; \
public: \
	DECLARE_CLASS(UInjectSerumInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UInjectSerumInteraction)


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInjectSerumInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInjectSerumInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInjectSerumInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInjectSerumInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInjectSerumInteraction(UInjectSerumInteraction&&); \
	NO_API UInjectSerumInteraction(const UInjectSerumInteraction&); \
public:


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInjectSerumInteraction(UInjectSerumInteraction&&); \
	NO_API UInjectSerumInteraction(const UInjectSerumInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInjectSerumInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInjectSerumInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInjectSerumInteraction)


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___injectSerumKillerInstinctTime() { return STRUCT_OFFSET(UInjectSerumInteraction, _injectSerumKillerInstinctTime); } \
	FORCEINLINE static uint32 __PPO___scoreEvent() { return STRUCT_OFFSET(UInjectSerumInteraction, _scoreEvent); } \
	FORCEINLINE static uint32 __PPO___serumApplyHeal() { return STRUCT_OFFSET(UInjectSerumInteraction, _serumApplyHeal); }


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_12_PROLOG \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_INCLASS \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UInjectSerumInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_InjectSerumInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
