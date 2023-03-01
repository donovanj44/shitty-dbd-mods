// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEDEMOGORGON_DemogorgonPounceInteraction_generated_h
#error "DemogorgonPounceInteraction.generated.h already included, missing '#pragma once' in DemogorgonPounceInteraction.h"
#endif
#define THEDEMOGORGON_DemogorgonPounceInteraction_generated_h

#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_RPC_WRAPPERS \
	virtual void OnCancelCooldownComplete_Implementation(); \
 \
	DECLARE_FUNCTION(execOnCancelCooldownComplete);


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCancelCooldownComplete_Implementation(); \
 \
	DECLARE_FUNCTION(execOnCancelCooldownComplete);


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_EVENT_PARMS \
	struct DemogorgonPounceInteraction_eventOnChargedAttackReadyChanged_Parms \
	{ \
		bool ready; \
	}; \
	struct DemogorgonPounceInteraction_eventTriggerHuntingAudioEvent_Parms \
	{ \
		bool isHunting; \
	};


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemogorgonPounceInteraction(); \
	friend struct Z_Construct_UClass_UDemogorgonPounceInteraction_Statics; \
public: \
	DECLARE_CLASS(UDemogorgonPounceInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheDemogorgon"), NO_API) \
	DECLARE_SERIALIZER(UDemogorgonPounceInteraction)


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDemogorgonPounceInteraction(); \
	friend struct Z_Construct_UClass_UDemogorgonPounceInteraction_Statics; \
public: \
	DECLARE_CLASS(UDemogorgonPounceInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheDemogorgon"), NO_API) \
	DECLARE_SERIALIZER(UDemogorgonPounceInteraction)


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemogorgonPounceInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemogorgonPounceInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemogorgonPounceInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemogorgonPounceInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemogorgonPounceInteraction(UDemogorgonPounceInteraction&&); \
	NO_API UDemogorgonPounceInteraction(const UDemogorgonPounceInteraction&); \
public:


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemogorgonPounceInteraction(UDemogorgonPounceInteraction&&); \
	NO_API UDemogorgonPounceInteraction(const UDemogorgonPounceInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemogorgonPounceInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemogorgonPounceInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDemogorgonPounceInteraction)


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chargedAttackState() { return STRUCT_OFFSET(UDemogorgonPounceInteraction, _chargedAttackState); } \
	FORCEINLINE static uint32 __PPO___owningSlasher() { return STRUCT_OFFSET(UDemogorgonPounceInteraction, _owningSlasher); }


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_9_PROLOG \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_INCLASS \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEDEMOGORGON_API UClass* StaticClass<class UDemogorgonPounceInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheDemogorgon_Public_DemogorgonPounceInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
