// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AK24Power;
#ifdef THEK24_k24PowerCooldownInteraction_generated_h
#error "k24PowerCooldownInteraction.generated.h already included, missing '#pragma once' in k24PowerCooldownInteraction.h"
#endif
#define THEK24_k24PowerCooldownInteraction_generated_h

#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetK24Power);


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetK24Power);


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUk24PowerCooldownInteraction(); \
	friend struct Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics; \
public: \
	DECLARE_CLASS(Uk24PowerCooldownInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(Uk24PowerCooldownInteraction)


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUk24PowerCooldownInteraction(); \
	friend struct Z_Construct_UClass_Uk24PowerCooldownInteraction_Statics; \
public: \
	DECLARE_CLASS(Uk24PowerCooldownInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(Uk24PowerCooldownInteraction)


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Uk24PowerCooldownInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Uk24PowerCooldownInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uk24PowerCooldownInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uk24PowerCooldownInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Uk24PowerCooldownInteraction(Uk24PowerCooldownInteraction&&); \
	NO_API Uk24PowerCooldownInteraction(const Uk24PowerCooldownInteraction&); \
public:


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Uk24PowerCooldownInteraction(Uk24PowerCooldownInteraction&&); \
	NO_API Uk24PowerCooldownInteraction(const Uk24PowerCooldownInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Uk24PowerCooldownInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uk24PowerCooldownInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Uk24PowerCooldownInteraction)


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___k24PowerCooldownTime() { return STRUCT_OFFSET(Uk24PowerCooldownInteraction, _k24PowerCooldownTime); } \
	FORCEINLINE static uint32 __PPO___cooldownSpeedCurve() { return STRUCT_OFFSET(Uk24PowerCooldownInteraction, _cooldownSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___cooldownLvl3SpeedCurve() { return STRUCT_OFFSET(Uk24PowerCooldownInteraction, _cooldownLvl3SpeedCurve); } \
	FORCEINLINE static uint32 __PPO___playedCooldownSpeedCurve() { return STRUCT_OFFSET(Uk24PowerCooldownInteraction, _playedCooldownSpeedCurve); }


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_10_PROLOG
#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_INCLASS \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class Uk24PowerCooldownInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_k24PowerCooldownInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
