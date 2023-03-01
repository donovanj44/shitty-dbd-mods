// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THEONI_StartDemonModeInteraction_generated_h
#error "StartDemonModeInteraction.generated.h already included, missing '#pragma once' in StartDemonModeInteraction.h"
#endif
#define THEONI_StartDemonModeInteraction_generated_h

#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execSetPlayerOwner);


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execSetPlayerOwner);


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStartDemonModeInteraction(); \
	friend struct Z_Construct_UClass_UStartDemonModeInteraction_Statics; \
public: \
	DECLARE_CLASS(UStartDemonModeInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UStartDemonModeInteraction)


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUStartDemonModeInteraction(); \
	friend struct Z_Construct_UClass_UStartDemonModeInteraction_Statics; \
public: \
	DECLARE_CLASS(UStartDemonModeInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UStartDemonModeInteraction)


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartDemonModeInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartDemonModeInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartDemonModeInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartDemonModeInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartDemonModeInteraction(UStartDemonModeInteraction&&); \
	NO_API UStartDemonModeInteraction(const UStartDemonModeInteraction&); \
public:


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartDemonModeInteraction(UStartDemonModeInteraction&&); \
	NO_API UStartDemonModeInteraction(const UStartDemonModeInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartDemonModeInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartDemonModeInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStartDemonModeInteraction)


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__YawAdjustTime() { return STRUCT_OFFSET(UStartDemonModeInteraction, YawAdjustTime); } \
	FORCEINLINE static uint32 __PPO__DemonModeActivationMontage() { return STRUCT_OFFSET(UStartDemonModeInteraction, DemonModeActivationMontage); }


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_9_PROLOG
#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_INCLASS \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UStartDemonModeInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_StartDemonModeInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
