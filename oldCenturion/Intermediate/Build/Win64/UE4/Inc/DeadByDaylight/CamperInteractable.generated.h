// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class UInteractionDefinition;
class UInteractor;
#ifdef DEADBYDAYLIGHT_CamperInteractable_generated_h
#error "CamperInteractable.generated.h already included, missing '#pragma once' in CamperInteractable.h"
#endif
#define DEADBYDAYLIGHT_CamperInteractable_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_RPC_WRAPPERS \
	virtual bool ServerMoveOut_Validate(); \
	virtual void ServerMoveOut_Implementation(); \
 \
	DECLARE_FUNCTION(execGetOwningSurvivor); \
	DECLARE_FUNCTION(execServerMoveOut); \
	DECLARE_FUNCTION(execSetKillInteraction); \
	DECLARE_FUNCTION(execUpdateTargetHPSlot);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerMoveOut_Validate(); \
	virtual void ServerMoveOut_Implementation(); \
 \
	DECLARE_FUNCTION(execGetOwningSurvivor); \
	DECLARE_FUNCTION(execServerMoveOut); \
	DECLARE_FUNCTION(execSetKillInteraction); \
	DECLARE_FUNCTION(execUpdateTargetHPSlot);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_EVENT_PARMS \
	struct CamperInteractable_eventGetSlasherInteractor_Parms \
	{ \
		UInteractor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CamperInteractable_eventGetSlasherInteractor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACamperInteractable(); \
	friend struct Z_Construct_UClass_ACamperInteractable_Statics; \
public: \
	DECLARE_CLASS(ACamperInteractable, APlayerInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACamperInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<ACamperInteractable*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACamperInteractable(); \
	friend struct Z_Construct_UClass_ACamperInteractable_Statics; \
public: \
	DECLARE_CLASS(ACamperInteractable, APlayerInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ACamperInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<ACamperInteractable*>(this); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACamperInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACamperInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamperInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamperInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamperInteractable(ACamperInteractable&&); \
	NO_API ACamperInteractable(const ACamperInteractable&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACamperInteractable(ACamperInteractable&&); \
	NO_API ACamperInteractable(const ACamperInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACamperInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACamperInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACamperInteractable)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealingInteractors() { return STRUCT_OFFSET(ACamperInteractable, HealingInteractors); } \
	FORCEINLINE static uint32 __PPO___healInteractions() { return STRUCT_OFFSET(ACamperInteractable, _healInteractions); } \
	FORCEINLINE static uint32 __PPO___killCharge() { return STRUCT_OFFSET(ACamperInteractable, _killCharge); } \
	FORCEINLINE static uint32 __PPO___snapOutOfItCharge() { return STRUCT_OFFSET(ACamperInteractable, _snapOutOfItCharge); } \
	FORCEINLINE static uint32 __PPO___wakeUpCharge() { return STRUCT_OFFSET(ACamperInteractable, _wakeUpCharge); } \
	FORCEINLINE static uint32 __PPO___crowDismissCharge() { return STRUCT_OFFSET(ACamperInteractable, _crowDismissCharge); } \
	FORCEINLINE static uint32 __PPO___activator() { return STRUCT_OFFSET(ACamperInteractable, _activator); } \
	FORCEINLINE static uint32 __PPO___killInteractor() { return STRUCT_OFFSET(ACamperInteractable, _killInteractor); } \
	FORCEINLINE static uint32 __PPO___killInteractionZone() { return STRUCT_OFFSET(ACamperInteractable, _killInteractionZone); } \
	FORCEINLINE static uint32 __PPO___killHealthyInteractionZone() { return STRUCT_OFFSET(ACamperInteractable, _killHealthyInteractionZone); } \
	FORCEINLINE static uint32 __PPO___mainInteractionZone() { return STRUCT_OFFSET(ACamperInteractable, _mainInteractionZone); } \
	FORCEINLINE static uint32 __PPO___healingInteractor1() { return STRUCT_OFFSET(ACamperInteractable, _healingInteractor1); } \
	FORCEINLINE static uint32 __PPO___selfInteractionsInteractor() { return STRUCT_OFFSET(ACamperInteractable, _selfInteractionsInteractor); } \
	FORCEINLINE static uint32 __PPO___rootComponent() { return STRUCT_OFFSET(ACamperInteractable, _rootComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_17_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ACamperInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
