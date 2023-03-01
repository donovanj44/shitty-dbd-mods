// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef THEONI_OniDashInteraction_generated_h
#error "OniDashInteraction.generated.h already included, missing '#pragma once' in OniDashInteraction.h"
#endif
#define THEONI_OniDashInteraction_generated_h

#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execSetPlayerOwner);


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execSetPlayerOwner);


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_EVENT_PARMS \
	struct OniDashInteraction_eventOnChargeBegin_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct OniDashInteraction_eventOnChargeEnd_Parms \
	{ \
		ADBDPlayer* player; \
		bool chargeCompleted; \
	}; \
	struct OniDashInteraction_eventOnDashBegin_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct OniDashInteraction_eventOnDashEnd_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOniDashInteraction(); \
	friend struct Z_Construct_UClass_UOniDashInteraction_Statics; \
public: \
	DECLARE_CLASS(UOniDashInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UOniDashInteraction)


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUOniDashInteraction(); \
	friend struct Z_Construct_UClass_UOniDashInteraction_Statics; \
public: \
	DECLARE_CLASS(UOniDashInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UOniDashInteraction)


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOniDashInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOniDashInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOniDashInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOniDashInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOniDashInteraction(UOniDashInteraction&&); \
	NO_API UOniDashInteraction(const UOniDashInteraction&); \
public:


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOniDashInteraction(UOniDashInteraction&&); \
	NO_API UOniDashInteraction(const UOniDashInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOniDashInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOniDashInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOniDashInteraction)


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chargingSpeedCurve() { return STRUCT_OFFSET(UOniDashInteraction, _chargingSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___dashingSpeedCurve() { return STRUCT_OFFSET(UOniDashInteraction, _dashingSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___yawAdjustTime() { return STRUCT_OFFSET(UOniDashInteraction, _yawAdjustTime); } \
	FORCEINLINE static uint32 __PPO___cooldownSpeedCurve() { return STRUCT_OFFSET(UOniDashInteraction, _cooldownSpeedCurve); }


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_9_PROLOG \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_INCLASS \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UOniDashInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_OniDashInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
