// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THETWINS_ChargeTwinJumpInteraction_generated_h
#error "ChargeTwinJumpInteraction.generated.h already included, missing '#pragma once' in ChargeTwinJumpInteraction.h"
#endif
#define THETWINS_ChargeTwinJumpInteraction_generated_h

#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_RPC_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_EVENT_PARMS \
	struct ChargeTwinJumpInteraction_eventCosmetic_OnJumpReadyChanged_Parms \
	{ \
		ADBDPlayer* twin; \
		bool ready; \
	};


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChargeTwinJumpInteraction(); \
	friend struct Z_Construct_UClass_UChargeTwinJumpInteraction_Statics; \
public: \
	DECLARE_CLASS(UChargeTwinJumpInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UChargeTwinJumpInteraction)


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUChargeTwinJumpInteraction(); \
	friend struct Z_Construct_UClass_UChargeTwinJumpInteraction_Statics; \
public: \
	DECLARE_CLASS(UChargeTwinJumpInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheTwins"), NO_API) \
	DECLARE_SERIALIZER(UChargeTwinJumpInteraction)


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChargeTwinJumpInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChargeTwinJumpInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeTwinJumpInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeTwinJumpInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeTwinJumpInteraction(UChargeTwinJumpInteraction&&); \
	NO_API UChargeTwinJumpInteraction(const UChargeTwinJumpInteraction&); \
public:


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeTwinJumpInteraction(UChargeTwinJumpInteraction&&); \
	NO_API UChargeTwinJumpInteraction(const UChargeTwinJumpInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeTwinJumpInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeTwinJumpInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChargeTwinJumpInteraction)


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chargeJumpMaxCharge() { return STRUCT_OFFSET(UChargeTwinJumpInteraction, _chargeJumpMaxCharge); } \
	FORCEINLINE static uint32 __PPO___interactionViewPitchMax() { return STRUCT_OFFSET(UChargeTwinJumpInteraction, _interactionViewPitchMax); } \
	FORCEINLINE static uint32 __PPO___interactionViewPitchMin() { return STRUCT_OFFSET(UChargeTwinJumpInteraction, _interactionViewPitchMin); } \
	FORCEINLINE static uint32 __PPO___cancelCooldownTime() { return STRUCT_OFFSET(UChargeTwinJumpInteraction, _cancelCooldownTime); }


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_9_PROLOG \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_INCLASS \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THETWINS_API UClass* StaticClass<class UChargeTwinJumpInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheTwins_Public_ChargeTwinJumpInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
